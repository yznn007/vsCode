#include<stdio.h>
int main()
{
    int arr[10],num;
    for(int i=0;i<9;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&num);
    for(int i=0;i<10;i++)
        if(arr[i]>=num)
        {
            for(int j=9;j>i;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[i]=num;
            break;
        }
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);
    return 0;
}