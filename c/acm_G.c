#include<stdio.h>
int main()
{
    int n,arr[10000],brr[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                brr[i]=j+1;
                break;
            } 
            else brr[i]=0;
        }
    }
    brr[n-1]=0;
    for(int i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }
    return 0;
}