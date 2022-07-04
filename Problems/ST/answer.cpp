#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int n,m;
int num_list[100010];
int ST_table[100010][20];
int ST_max(int left,int right)
{
	int k=log2(right-left+1);
	return max(ST_table[left][k],ST_table[right-(1<<k)+1][k]);
}
void ST_prework()
{
	for (int i=1;i<=n;i++)
	{
		ST_table[i][0]=num_list[i];
	}
	for (int i=1,im=log2(n);i<=im;i++)
	{
		for (int j=1;j+(1<<i)-1<=n;j++)
		{
			ST_table[j][i]=max(ST_table[j][i-1],ST_table[j+(1<<i-1)][i-1]);
		}
	}
}
int main()
{
	int l,r;
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&num_list[i]);
	}
	ST_prework();
	for (int i=1;i<=m;i++)
	{
		scanf("%d%d",&l,&r);
		printf("%d\n",ST_max(l,r));
	}
    return 0;
}