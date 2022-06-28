#include <bits/stdc++.h>
using namespace std;
string str[10005];
int main()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>str[i];
	}
	sort(str+1,str+n+1);
	int cnt=unique(str+1,str+n+1)-str-1;
	cout<<cnt<<endl;
	return 0;
}