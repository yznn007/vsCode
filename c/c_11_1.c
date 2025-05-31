#include<stdio.h>
int judge(int n)
{
    if(n < 2) return 0;
    int i;
    for(i=2; i*i <= n; i++)
    {
        if(n % i == 0 && n != 2) return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("Input n:");
    scanf("%d", &n);
    if(judge(n)) printf("%d is prime",n); 
    else printf ("%d is not prime",n);
    return 0;
}