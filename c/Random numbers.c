#include<stdio.h>
int main()
{
    int n,sz[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&sz[i]);
    }
    for(int j=0;j<n-1;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if(sz[j]==sz[i])
            {
                for(int k=i;k<n-1;k++)
                sz[k]=sz[k+1];
                n--;
            }
            if(sz[j]>sz[i])
            {
                int temp=sz[j];
                sz[j]=sz[i];
                sz[i]=temp;
            }
        }
    }
    printf("%d\n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",sz[i]);
    }
    return 0;
}