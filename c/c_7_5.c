#include<stdio.h>
double sum(int up,int down,int *x,int n)
{   
    (*x)++;
    if(*x>n) return 0;
    else return (double)up/down+sum(up+down,up,x,n);
}
int main()
{
    int n,x=0;
    printf("Input n: ");
    scanf("%d",&n);
    printf("s=%.2f",sum(2,1,&x,n));
    return 0;
}