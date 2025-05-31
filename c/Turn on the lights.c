#include<stdio.h>
int main()
{
    int n,t;
    float a;
    int x[20000]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int num=0;
        scanf("%f%d",&a,&t);
        for(int j=1;j<=t;j++)
        {
            num=(a*j);
            printf("%d",num);
            x[num]++;
        }
    }
}