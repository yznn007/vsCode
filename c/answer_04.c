#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=7;i<n;i++)
    {
        if(i%7==0 || i%10==7)
        {
            printf("%d",i);
            if(i!=n-1)
            {
                printf(" ");
            }
        }
    }
    return 0;
}