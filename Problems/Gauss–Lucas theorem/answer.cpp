#include<bits/stdc++.h>
#define N 100010
using namespace std;
typedef long long ll;
ll primes[N];
int p;
ll qmi(ll a,int b,int p)
{
    a%=p;
    ll ans=1;
    for(int i=b;i;i>>=1,a=a*a%p)
    {
        if(i&1)
        {
            ans=ans*a%p;
        }
    }
    return ans;
}
ll C(ll a,ll b)
{
    if(b>a)
    {
        return 0;
    }
    return ((primes[a]*qmi(primes[b],p-2,p))%p*qmi(primes[a-b],p-2,p)%p);
}
ll lucas(ll a,ll b)
{
    if(!b)
    {
        return 1;
    }
    return C(a%p,b%p)*lucas(a/p,b/p)%p;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m>>p;
        primes[0]=1;
        for(int i=1;i<=p;i++)
        {
            primes[i]=(primes[i-1]*i)%p;
        }
        cout<<lucas(n+m,n)<<endl;
    }
}