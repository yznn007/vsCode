#include <stdio.h>  //2题
#include <math.h>
float distance(float x1,float x2,float y1,float y2,float z1,float z2)
{
    float dis;
    float xx;
    xx=x1*x1-x2*x2;
    xx=abs(xx);
    float yy;
    yy=y1*y1-y2*y2;
    yy=abs(yy);
    float zz;
    zz=z1*z1-z2*z2;
    zz=abs(zz);
    dis=xx+yy+zz;
    dis=sqrt(dis);
    return dis;
}
int main()
{
    float x1;
    float x2;
    float y1;
    float y2;
    float z1;
    float z2;
    printf("请输入坐标1：");
    scanf("%f%f%f",&x1,&y1,&z1);
    printf("请输入坐标2：");
    scanf("%f%f%f",&x2,&y2,&z2);
    float result=distance(x1,x2,y1,y2,z1,z2);
    printf("%f",result);
    return 0;
}