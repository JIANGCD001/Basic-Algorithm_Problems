#include <bits/stdc++.h>
using namespace std; 
struct Q
{
    int n,k,num[1000005];
    int q[1000005],h,t,p[1000005];
    void qread()
    {
        scanf("%d %d",&n,&k);
        for(int i=1;i<=n;++i)
        {
            scanf("%d",&num[i]);
        }
    }
    void qmax()
    {
        h=1;
        t=0;
        for(int i=1;i<=n;++i)
        {
            while(h<=t&&q[t]<=num[i])
            {
                t--;
            }
            q[++t]=num[i];
            p[t]=i;
            while(p[h]<=i-k)
            {
                h++;
            }
            if(i>=k)
            {
                printf("%d ",q[h]);
            }
        }
        printf("\n");
    }
    void qmin()
    {
        h=1;
        t=0;
        for(int i=1;i<=n;++i)
        {
            while(h<=t&&q[t]>=num[i])
            {
                t--;
            }
            q[++t]=num[i];
            p[t]=i;
            while(p[h]<=i-k)
            {
                h++;
            }
            if(i>=k)
            {
                printf("%d ",q[h]);
            }
        }
        printf("\n");
    }
};
Q q;
int main()
{
    q.qread();
    q.qmin();
    q.qmax();
    return 0;
}