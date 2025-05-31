#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    scanf("%lf",&x);
    if(x>=-10 && x<=4)
    {
        y=fabs(x-2);
        printf("y=%.2lf",y);
    }
    else if(x>=5 && x<=7)
    {
        y=x+10;
        printf("y=%.2lf",y);
    }
    else if(x>=8 && x<=12)
    {
        y=pow(x,4);
        printf("y=%.2lf",y);
    }
    else
    {
        printf("No answer.");
    }
    return 0;
}