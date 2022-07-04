#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int ans=0;
    for (int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        if (a<0)
        {
            a=-a;
        }
        ans=__gcd(ans,a);
    }
    printf("%d\n",ans);
    return 0;
}