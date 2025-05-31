#include<stdio.h>
int main()
{
    int m,n,sz[5][5];
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<5;i++)
        {
            scanf("%d",&sz[j][i]);
        }
    }
    scanf("%d%d",&m,&n);
    for(int i=0;i<5;i++)
    {
        int a[5];
        a[i]=sz[m-1][i];
        sz[m-1][i]=sz[n-1][i];
        sz[n-1][i]=a[i];
    }
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<5;i++)
        {
            printf("%d ",sz[j][i]);
        }
        printf("\n");
    }
    return 0;
}