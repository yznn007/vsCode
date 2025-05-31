#include<stdio.h>
#include<string.h>
int niu(int n)
{
    if(n==1) return 2;
    if(n==2) return 3;
    if(n%4==0) return niu(n-1)+1;
    return niu(n-1);
}
int print(int n)
{
    niu(n);
    if(n<=4)
    {
        printf("2\n");
        return 0;
    }
    else if(n<=8) 
    {
        printf("4\n");
        return 0;
    }
    printf("%d\n",niu(n));
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        print(n);
        scanf("%d", &n);
    }
    return 0;
}