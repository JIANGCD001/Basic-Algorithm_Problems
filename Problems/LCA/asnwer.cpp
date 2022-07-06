#include <bits/stdc++.h>
#define maxn 500500
using namespace std; 
struct Edge
{
    int from,to;
}edges[2*maxn]; 
int first[maxn],next[2*maxn];
int fastread()
{
    int re=0;
    char ch=getchar();
    while (ch<'0' || ch>'9')
    {
    	ch=getchar();
	}
    while (ch>='0' && ch<='9')
	{ 
        re=re*10+ch-'0'; 
        ch=getchar();
    }
    return re;
}
int n,m;
int root;
int height[maxn];
float log2n;
int f[maxn][20]; 
int have[maxn];
void dfs(int u,int h)
{
    int v;
    height[u]=h;
    for(int i=1;i<=log2n;i++)
	{
        if(h<=(1<<i))
        {
        	break;
		}
        f[u][i] = f[ f[u][i-1] ][i-1];
    }
    int k=first[u];
    while(k!=-1)
	{
        v=edges[k].to;
        if(!have[v])
		{
            have[v]=1;        
            f[v][0]=u;
            dfs(v,h+1);
        }
        k=next[k];
    }
}
int LCA(int a,int b)
{
    int da=height[a],db=height[b];
    if(da!=db)
	{
        if(da<db)
		{ 
            swap(a,b);
            swap(da,db);
        }
        int d=da-db;
        for(int i=0;i<=log2n;i++) 
        {
        	if( (1<<i) & d)
        	{
        		a=f[a][i];
			}
		}
	}
    if(a==b)
    {
    	return b;
	}
    int i=0;
    for(i=log2n;i>=0;i--)
	{
        if(height[ f[a][i] ]<0)
        {
        	continue;
		}
        if( f[a][i]==f[b][i] )
        {
        	continue;
		}
        else a=f[a][i],b=f[b][i];
    }    
    return f[a][0];
} 
int main()
{
    n=fastread();
	m=fastread();
	root=fastread();
    memset(first,-1,sizeof(first));
    memset(next,-1,sizeof(next));
    int s,t;
    int dsd=2*(n-1);
    for(int i=1;i<=dsd;i+=2)
	{
        s=fastread();
		t=fastread();
        edges[i].from=s;
        edges[i].to=t;
        edges[i+1].from=t;
        edges[i+1].to=s;
        next[i]=first[s];
        first[s]=i;
        next[i+1]=first[t];
        first[t]=i+1;
    }
    log2n=log(n)/log(2)+1; 
    memset(have,0,sizeof(have));
    memset(height,0,sizeof(height));
    memset(f,-1,sizeof(f));
    have[root]=1;
    dfs(root,1);                
    for(int i=1;i<=n;i++)
	{
        for(int j=0;j<=log2n;j++)
		{
            if(height[i] <=(1<<j) )
            {
            	break;
			}
        }
    }
    for(int i=0;i<m;i++)
	{
        s=fastread();
		t=fastread();
        int result=LCA(s,t);
        cout<<result<<endl;
    }
    return 0;
}