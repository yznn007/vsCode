#include<stdio.h>
#include<stdlib.h>
int judge(int arr[][2],int j,int k)
{
    for(int l=0;l<j;l++)
    {
        if(arr[l][1] == k%(j+1))
        return -1;           
    }
    return 0;
}
int main()
{
    int t,n[50],a;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i=0;i<t;i++)
    {
        int k = 1,arr[100][2];
        for(int j=0;j<n[i];j++)
        {
            int a=0;
            while(a!=1)
            {
                if(judge(arr,j,k) == 0)
                {    
                    arr[j][0]=k;
                    arr[j][1]=k%(j+1);
                    a=1;
                }
                k++;
            } 
        }
        for(int j=0;j<n[i];j++)
        {
            printf("%d ",arr[j][0]);
        }
        printf("\n");
    }
    return 0;
}