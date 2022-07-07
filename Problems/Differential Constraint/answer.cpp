#include <bits/stdc++.h>
#define MAXN 5005
using namespace std;
struct edge
{ 
    int u,v,w; 
}e[MAXN];
int n,m,c,c_,y;
int dis[MAXN];
int main()
{
    cin>>n>>m;
    for (int i=1;i<=m;i++)
    {
        cin>>c>>c_>>y;
        e[i].u=c_;
        e[i].v=c;
        e[i].w=y;
    }
    dis[1]=0;
    for (int i=2;i<=n;i++)
    {
        dis[i]=0x3f3f3f3f;
    }
	for (int i=1;i<n;i++) 
	{
        for (int j=1;j<=m;j++)
	    {
            dis[e[j].v]=min(dis[e[j].u]+e[j].w,dis[e[j].v]);
        }
    }
    for (int i=1;i<=m;i++) 
    {
        if (dis[e[i].v]>dis[e[i].u]+e[i].w) 
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for (int i=1;i<=n;i++)
    {
        cout<<dis[i]<<" ";
    }
    cout<<endl;
    return 0;
}