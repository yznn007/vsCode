#include<stdio.h>
int main()
{
    int l,r,count=0;
    scanf("%d%d",&l,&r);
    for(int i=l;i<=r;i++)
    {
        if(i%10==2) count++;
        if((i/10)%10==2) count++;
        if((i/100)%10==2) count++;
        if((i/1000)%10==2) count++;
    }
    printf("%d",count);
    return 0;
}