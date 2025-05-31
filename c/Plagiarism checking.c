#include<stdio.h>
int main()
{
    int n,sz[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&sz[i]);
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<j;i++)
        {
           if(sz[i]==sz[j])
           {
                for(int k=j;k<n;k++)
                {
                    sz[k]=sz[k+1];
                }
                n-=1;
           }
        }
        printf("%d ",sz[j]);
    }
    return 0;
}