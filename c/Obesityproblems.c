#include<stdio.h>
int main()
{
    double m,h,bmi;
    scanf("%lf %lf",&m,&h);
    bmi=m/(h*h);
    if(bmi<18.5)
    {
        printf("Underweight");
    }
    else if(bmi>=24)
    {
        printf("%.6g\n",bmi);
        printf("Overweight");
    }
    else
    {
        printf("Normal");
    }
    return 0;
}