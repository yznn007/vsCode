#include<stdio.h>
int main()
{
    int N,sz[100][100],zs[100][100];
    scanf("%d",&N);
    for(int j=0;j<N;j++)
    {
        for(int i=0;i<N;i++)
        {
            scanf("%d",&sz[j][i]);
        }
    }
    for(int j=0;j<N;j++)
    {
        for(int i=0;i<N;i++)
        {
            zs[N-1-j][N-1-i]=sz[j][i];
        }
    }
    for(int j=0;j<N;j++)
    {
        for(int i=0;i<N;i++)
        {
            printf("%d ",zs[j][i]);
        }
        printf("\n");
    }
    return 0;
}