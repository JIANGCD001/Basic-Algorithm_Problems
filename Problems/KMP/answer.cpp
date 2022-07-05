#include <bits/stdc++.h>
using namespace std;
int kmp[1000010],j;
char a[1000010],b[1000010];
int main()
{
    cin>>a+1;
    cin>>b+1;
    int len1=strlen(a+1),len2=strlen(b+1);
    for (int i=2;i<=len2;i++)
    {
        while (j&&b[i]!=b[j+1])
        {
            j=kmp[j];
        }
        if (b[j+1]==b[i])
        {
            j++;
        }
        kmp[i]=j;
    }
    j=0;
    for (int i=1;i<=len1;i++)
    {
        while (j>0&&b[j+1]!=a[i])
        {
            j=kmp[j];
        }
        if (b[j+1]==a[i])
        {
            j++;
        }
        if (j==len2)
        {
            printf("%d\n",i-len2+1);
            j=kmp[j];
        }
    }
    for (int i=1;i<=len2;i++)
    {
        printf("%d ",kmp[i]);
    }
    return 0;
}