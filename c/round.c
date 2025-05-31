#include <stdio.h>  //3题
#include <math.h>
float discriminantt(float a,float b,float c)
    {    
        float intermediatevariable=b*b-4*a*c;
        return intermediatevariable;
    }
float y(float a,float b,float c)
{
    float discriminant=discriminantt(a,b,c);
    if(discriminant<0)
    {    
        printf("无解");
    }
    else if(discriminant==0)
    {    
        float root=-b/(2*a);
        printf("它的根是：%f",root);
    }
    else
    {
        discriminant=sqrt(discriminant);
        float root1=(-b+discriminant)/(2*a);
        float root2=(-b-discriminant)/(2*a);
        printf("它的根分别是：%f,%f",root1,root2);
    }
    
}
int main()
{
    float a;
    float b;
    float c;
    printf("请输入系数：");
    scanf("%f%f%f",&a,&b,&c);
    discriminantt(a,b,c);
    y(a,b,c);
    return 0;
}