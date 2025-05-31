#include<stdio.h>
int traverse(char str[1000][1000],int i,int j)
{
    if(str[i+1][j+1]=='*' && str[i][j+1]=='*' && str[i+1][j]=='*')
    return 1;
    return 0;
}
int main()
{
    int n,m,count=0;
    char str[1000][1000];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {  
        scanf("%s",str[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(str[i][j]=='*' && traverse(str,i,j)==1) count++;  
        }
    }
    printf("%d",count);
    return 0;
}