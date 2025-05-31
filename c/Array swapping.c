#include <stdio.h>
void scan(int a,int b,int x[100001][100001])
{
    for(int j=0;j<a;j++)
    {
        for(int i=0;i<b;i++)
        {
            scanf("%d",&x[j][i]);
        }
    }
}
int main()
{
    int n,m,q,a[100001][100001],b[100001][100001];
    scanf("%d%d%d",&n,&m,&q);
    scan(n,m,a);
    scan(q,3,b);
    for(int i=0;i<q;i++)
    {
        int k[100001][100001];
        if(b[i][1]!=b[i][2])
        {
            if(b[i][0]==1)
            {
                for(int j=0;j<m;j++)
                {
                    k[b[i][1]][j]=a[b[i][1]][j];
                    a[b[i][1]][j]=a[b[i][2]][j];
                    a[b[i][2]][j]=k[b[i][1]][j];
                }
            }
            else if(b[i][0]==2)
            {
                for(int j=0;j<m;j++)
                {
                    k[j][b[i][1]]=a[j][b[i][1]];
                    a[j][b[i][1]]=a[j][b[i][2]];
                    a[j][b[i][2]]=k[j][b[i][1]];
                }
            }
            else
            {
                printf("%d\n",a[b[i][1]][b[i][2]]);
            }
        }
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}