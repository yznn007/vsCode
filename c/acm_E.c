#include<stdio.h>
int main()
{
    int n,nn[1000][1000],num=1,i=0,j=0,ii=1,jj=1;
    scanf("%d",&n);  
    while(i!=n && j!=n)
    {
        if(i==0) ii*=-1;
        if(j==0) jj*=-1;
        nn[i][j]=num++;
    }    
    return 0;
}