#include<stdio.h>
#include<math.h>
int main ()
{
    int k,distance=0,sz[5000];
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&sz[i]);
    }
    for(int j=0;j<k-1;j++)
    {
        int t=j;
        for(int i=j+1;i<k;i++)
        {
            if(sz[t]>sz[i])
            {
                int l=sz[j];
                sz[j]=sz[i];
                sz[i]=l;
            }
        } 
    }
    for(int i=0;i<k-1;i++)
    {
        if(abs(sz[i]-sz[i+1])>distance)
        distance=abs(sz[i]-sz[i+1]);
    }
    printf("%d",distance);
    return 0;
}