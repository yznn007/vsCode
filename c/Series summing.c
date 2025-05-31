#include<stdio.h>
int main()
{
    int k,n=1;
    double s=1.0;
    scanf("%d",&k);
    while(s<=k)
    {
        n++;
        s+=1.0/n;
    } 
    printf("%d",n);
    return 0;
}