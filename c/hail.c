#include <stdio.h>
int main()
{
    int n,x[1001],i=1;
    scanf("%d",&n);
    x[0]=n;
    while(n!=1)
    {
        if(n%2!=0)
        {
            n=n*3+1;
            x[i]=n;
        }
        else
        {
            n/=2;
            x[i]=n;
        }
        i++;
    }
    for(;(i-1)>=0;i--)
    {
        printf("%d",x[i-1]);
        if(x[i-1]!=x[0])
        {
            printf(" ");
        }
    }
    return 0;
}