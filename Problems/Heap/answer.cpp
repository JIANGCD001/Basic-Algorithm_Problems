#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
priority_queue<int,vector<int>,greater<int> >HEAP;
int main()
{
	int n,op,num;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>op;
		if (op==1)
		{
			cin>>num;
			HEAP.push(num);
		}
		else if(op==2)
		{
			cout<<HEAP.top()<<endl;
		}
		else
		{
			HEAP.pop();
		}
	}
    return 0;
}