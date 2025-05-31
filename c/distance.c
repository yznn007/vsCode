#include <stdio.h>  //1题
#include <math.h>
float R;
double circumference(float r1,double pi1)
{
    double cir;
    cir=2*r1*pi1;
    return cir;
}
double area(float r2,double pi2)
{
    int ar;
    ar=r2*r2*pi2;
    return ar;
}
int main()
{
    scanf("%f",&R);
    double result1=circumference(R,M_PI);
    double result2=area(R,M_PI);
    printf("该半径圆的周长是%f，面积是%f",result1,result2);
    return 0;
}