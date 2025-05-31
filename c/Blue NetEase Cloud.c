#include<stdio.h>
void scan(int n,int m,int arr[1000])
{
    for(int j=0;j<n;j++)
    {
        for(int i=1;i<n/m;i++)
        {
            arr[j]=i;
        }
    }
}
int main()
{
    int n,m,arr[1000];
    scanf("%d%d",&n,&m);
    return 0;
}