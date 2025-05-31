#include<stdio.h>
int main()
{
    int m,n,sum=0,sz[100][100];
    scanf("%d%d",&m,&n);
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&sz[j][i]);
            if(j==0 || i==0 || j==m-1 || i==n-1)
            {
                sum+=sz[j][i];
            }   
        }
    }
    printf("%d",sum);
    return 0;
}