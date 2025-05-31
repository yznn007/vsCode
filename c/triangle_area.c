#include<stdio.h>
#include<math.h>
int main()
{
    double p,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    p=(a+b+c)/2;
    double result=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf",result);
    return 0;
}