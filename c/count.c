#include<stdio.h>
int main()
{   long long n,q,V,num=0,a[100001];
    long long x,y;
    scanf("%lld%lld",&n,&q);
    scanf("%lld",&V);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(int i=1;i<=q;i++)
    {
        scanf("%lld%lld",&x,&y);
        a[x]=y;
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=V)
        {
            num++;
        }
    }
    printf("%lld",num);
    return 0;
}