#include<stdio.h>
int main()
{
    int arr[1000][30],count=0,a,b,ar[1000];
    scanf("%d",&a);
    printf("\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        printf("\n");
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        for(int j=0;j<b-1;j++)
        {
            if(arr[i][j]!=-1)
            for(int k=j+1;k<b;k++)
            {
                if(arr[i][j]==arr[i][k])
                {
                    count++;
                    arr[i][k]=-1;
                }
            } 
        }
        ar[i]=count;
        count=0;
    }
    for(int i=0;i<a;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}