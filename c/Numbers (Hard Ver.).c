#include<stdio.h>
#include<math.h>
long long max(int n,int p)
{
    long long i,min=999999999,minn;
    for(i=pow(10,n)-1;i>=pow(10,n-1);--i)
    {
        long long sum=0;
        long long f,a=i;
        f=a;
        for(int j=0;j<n;j++)
        {
            f=a;
            f%=10;
            sum+=f;
            a/=10;
        }
        if(sum%p<=min) 
        {
            min=sum%p;
            minn=i;
        }
    }
    return minn;
}
int main()
{
    int n,p;
    scanf("%d%d",&n,&p);
    if(pow(10,n)-1<p) printf("1");
    else printf("%lld",max(n,p));
    return 0;
}