#include<stdio.h>
int main ()
{
    int n,fish[100]={0},a=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&fish[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(fish[j]<fish[i])
            {
                a++;
            }
        }
        printf("%d ",a);
        a=0;
    }
}