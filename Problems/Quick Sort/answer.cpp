#include <bits/stdc++.h>
using namespace std;
int n,lst[1000005];
void fsort(int l,int r)
{
	int mid=lst[(l+r)/2];
	int i=l,j=r;
	do
	{
		while (lst[i]<mid)
		{
			i++;
		}
		while (lst[j]>mid)
		{
			j--;
		}
		if (i<=j)
		{
			swap(lst[i],lst[j]);
			i++;
			j--;
		}
	}
	while (i<=j);
	if (l<j)
	{
		fsort(l,j);
	}
	if (i<r)
	{
		fsort(i,r);
	}
}
int main()
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>lst[i];
	}
	fsort(1,n);
	for (int i=1;i<=n;i++)
	{
		cout<<lst[i]<<" ";
	}
    return 0;
}