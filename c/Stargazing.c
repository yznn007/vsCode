#include<stdio.h>
#include<stdlib.h>
void scan(char ch[1500][1500],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%c",&ch[i][j]);
        }
    }
}
void traverse(char ch[1500][1500],int n,int m,int *count)
{
    for(int k=n-1;k<n+2;k++)
    {
        for(int l=m-1;l<m+2;l++)
        {
            if(k!=n && l!=m)
            {
                if(ch[k][l]=='*')
                {
                    ch[k][l]='#';
                    traverse(*(ch+k)+l,k,l,count);
                }
                *count++;
            }
        }
    }
}
void judge1(char ch[1500][1500],int co[1500],int n,int m,int *count)
{
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<m-1;j++)
        {
            if(ch[i][j]=='*')
            {
                ch[i][j]='#';
                *count++;
                traverse(*(ch+n)+m,n,m,count);                
                int k=0;
                co[k++]=*count;
                *count=0;
            }   
        }
    }
}
int judge2(int co[1500],int *max)
{
    int i,jj,k;
    i=jj=k=0;
    while(co[i])
    {
        
        for(int j=0;j<i;j++)
        {
            if(co[j]==co[i])
            {
                jj++;
            }
        }
        i++;
        if(!jj) k++;
    }
    return k;
}
int main()
{
    int n,m,max=0,count=0,co[1500];
    scanf("%d%d",&n,&m);
    char ch[1500][1500];
    scan(ch,n,m);
    judge1(ch,co,n,m,&count);
    printf("%d ",judge2(co,&max));
    printf("%d",max);
    return 0;
}