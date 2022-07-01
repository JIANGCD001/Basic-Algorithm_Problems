#include <bits/stdc++.h>
#define MAXN 100000005
using namespace std;
bool table[MAXN]={false};
int p[MAXN];
int main()
{
	int n,q,cnt=0,x;
	scanf("%d %d",&n,&q);
	table[0]=table[1]=true;
	for (int i=2;i<=sqrt(n);i++)
	{
		if (!table[i])
		{
			for (int j=2;i*j<=n;j++)
			{
				table[i*j]=true;
			}
		}
	}
	for (int i=2;i<=n;i++)
	{
		if (!table[i])
		{
			cnt++;
			p[cnt]=i;
		}
	}
	for (int i=1;i<=q;i++)
	{
		scanf("%d",&x);
		printf("%d\n",p[x]);
	}
    return 0;
}