#include<stdio.h>
int main()
{
    int r;
    double s,v;
    const double pi = 3.1415926535;
    printf("请输入球体半径r:\n");
    scanf("%d",&r);
    s=pi*r*r*4;
    v=4.00/3*pi*r*r*r;
    printf("S = %0.2f\nV = %0.2f",s,v);
    return 0;
}