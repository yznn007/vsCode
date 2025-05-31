#include<stdio.h>
int main()
{
    int a[7];
    int max=0;
    int day=0;
    for(int i=0;i<7;i++)
    {
        int b,c;
        scanf("%d%d",&b,&c);
        a[i]=b+c;
    }
    for(int i=0;i<7;i++)
    {
        if(a[i]>8)
        {
            if(a[i]>max)
            {
                max=a[i];
                day=i+1;
            }
        }
    }
    printf("%d",day);
    return 0; 
}