#include<stdio.h>
int factorial(int a)
{
    if(a==0) return 1;
    else return a*factorial(a-1);
    
}
int main()
{
    int n,m;
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d!+%d!=%d",m,n,factorial(m)+factorial(n));
    return 0;
}