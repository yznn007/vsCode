#include<stdio.h>
#include<math.h>
int main ()
{
    int n,k,num=0;
    scanf("%d%d",&n,&k);
    for(int i=n;i<=pow(n,n);i+=10)
    {
        if(i>=1 && i<=pow(n,n) && (i%k)%n==0)
        num++;
    }
    printf("%d",num);
    return 0;
}