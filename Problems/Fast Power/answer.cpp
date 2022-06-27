#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long ans=1,b,p,k;
	scanf("%lld %lld %lld",&b,&p,&k);
	printf("%lld^%lld mod %lld=",b,p,k);
	while(p>0)
	{
		if(p%2==1)
		{
			ans=ans*b%k;
		}
		b=b*b%k;
		p=p>>1;
	}
	printf("%lld\n",ans%k);
	return 0;
}