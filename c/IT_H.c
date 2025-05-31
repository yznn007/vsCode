#include<stdio.h>
void pp(int a)
{
    for(int j=1;j<a/2;j++)
    {
        for(int k=0;k<j;k++)            
        {
            printf(" ");
        }
       printf("X");
        for(int k=a-2*(j+1);k>0;k--)
        {
            printf(" ");
        }
        printf("X");
        printf("\n");
    }
    for(int i=0;i<a/2;i++)
    {
        printf(" ");
    }
    printf("X\n");
    for(int j=0;j<a/2;j++)
    {
        for(int k=a/2-j;k>1;k--)
        {
            printf(" ");
        }
        printf("X");
        for(int k=-1;k<=a-2*(a/2-j+1);k++)
        {
            printf(" ");
        }
        printf("X");
        printf("\n");
    }
}
void print(int a,int b)
{
    for(int j=0;j<1;j++)
    {
        for(int k=0;k<j;k++)            
        {
            printf(" ");
        }
       printf("X");
        for(int k=a-2*(j+1);k>0;k--)
        {
            printf(" ");
        }
        printf("X");
        printf("\n");
    }
    for(int k=0;k<b;k++)
        pp(a);
}
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        print(a,b);
        printf("\n");
    }
    return 0;
}