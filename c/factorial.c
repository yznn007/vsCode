#include<stdio.h>
int factorial(int n)
{
    if(n <= 1) return 1;
    n*=factorial(n-1);
    return n;
}

int main()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        printf("%d!=%d\n",i,factorial(i));
    }    
    return 0;
}