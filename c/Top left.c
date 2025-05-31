#include<stdio.h>
int main()
{
    int sz[3][3];
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            scanf("%d",&sz[j][i]);
        }
    }
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3-j;i++)
        {
            printf("%d ",sz[j][i]);
        }
        printf("\n");
    }
    return 0;
}