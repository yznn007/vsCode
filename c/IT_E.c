#include<stdio.h>
int greatest_common_divisor(int a, int b) 
{
    int i=a<b?a:b;
    while(1)
    {
        if(a%i==0 && b%i==0)
            return i;
        i--;
    }
}
int lcm(int a, int b)
{
    int i=a>b?a:b;
    while(1)
    {
        if(i%a==0 && i%b==0)
            return i;
        i++;
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d %d",greatest_common_divisor(a,b),lcm(a,b));
    return 0;
}