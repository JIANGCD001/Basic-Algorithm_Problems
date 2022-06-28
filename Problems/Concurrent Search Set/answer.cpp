#include<bits/stdc++.h>
using namespace std;
int n,m,fa[10010],z,x,y;
int found(int x)
{
    if(fa[x]==x)
    {
        return x;
    }
    return fa[x]=found(fa[x]);
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>z>>x>>y;
        if(z==1)
        {
            fa[found(x)]=found(y);
        }
        else
        {
            if(found(x)==found(y))
            {
                cout<<"Y"<<endl;
            }
            else
            {
                cout<<"N"<<endl;
            }
        }
    }
    return 0;
}