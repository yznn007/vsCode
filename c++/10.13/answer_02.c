#include<stdio.h>
int main()
{
    int a[20]={0};
    for(int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<19;j++)
    {
        for(int i=0;i<19-j;i++)
        {
            int k;
            if(a[i]>=a[i+1])
            {
                k=a[i];
                a[i]=a[i+1];
                a[i+1]=k;
            }
        }
    }    
    for(int i=19;i>=0;i--)
    {
        if(a[i]==0)
        {
            printf("%d %d",a[i+1],a[19]);
            break;
        }
    }
    printf(" ");
    for(int i=0;i<20;i++)
    {
        if(a[i]==0)
        {
            printf("%d %d",a[i-1],a[0]);
            break;
        }
    }
    return 0;
}