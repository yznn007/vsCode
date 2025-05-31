#include<stdio.h>
int main()
{
    int m,n,sum=0,product=1,sz[100][100];
    scanf("%d%d",&m,&n);
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&sz[j][i]);
            sum+=sz[j][i];
        }
        product*=sum;
        sum=0;
    }
    printf("%d",product);
    return 0;
}