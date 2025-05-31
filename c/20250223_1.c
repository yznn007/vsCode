#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int * b;
    b = &a;
    *b = 3;
    sum(a,b);
    printf("%d",a);
    return 0;
}
int sum(int a, int b)
{
    a=1;
    return a;
}