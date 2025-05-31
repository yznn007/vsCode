#include<stdio.h>
int dd(int N,int j,int *sz,int x[][2])
{
    int k=0;
    for(int i=0;i<N;i++)
    {
        if(sz[i]==x[j][0])
        {
            k++;
        }
    }
    return k;
}
int main()
{
    int N,sz[500],x[10][2]={{0},{1},{2},{3},{4},{5},{6},{7},{8},{9}};
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&sz[i]);
    }
    for(int j=0;j<10;j++)
    {
        int a=dd(N,j,sz,x);

        printf("%d %d\n",x[j][0],a);
    }
    return 0;
}