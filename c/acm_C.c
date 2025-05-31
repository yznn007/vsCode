#include<stdio.h>
#include<math.h>
int main()
{
    int arr[4],sum[6],min=7360;
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum[0]=abs(arr[0]+arr[1]-arr[2]-arr[3]);
    sum[1]=abs(arr[0]+arr[2]-arr[1]-arr[3]);
    sum[2]=abs(arr[0]+arr[3]-arr[2]-arr[1]);
    sum[3]=abs(arr[2]+arr[1]-arr[0]-arr[3]);
    sum[4]=abs(arr[3]+arr[1]-arr[2]-arr[0]);
    sum[5]=abs(arr[2]+arr[3]-arr[0]-arr[1]);
    for(int i=0;i<6;i++)
    {
        if(sum[i]<min) min=sum[i];
    }
    printf("%d",min);
    return 0;
}