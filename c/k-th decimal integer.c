#include<stdio.h>
void sort(int n,int x[]);
void judge(int n,int l,int k,int x[]);
int main()
{
    int n,k,l=0;
    int x[10000];
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    sort(n,x);
    judge(n,l,k,x);
    return 0;
}
void sort(int n,int x[])
{
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(x[i]>x[i+1])
            {
                int t=x[i];
                x[i]=x[i+1];
                x[i+1]=t;
            }
            else if(x[i]==x[i+1])
            {
                x[i+1]=30001;
                
            }
        }
    }
}
void judge(int n,int l,int k,int x[])
{
    for(int i=0;i<n;i++)
    {
        if(x[i]==30001)
        {
            l++;
        }
    }
    if(k<=n-l)
    {
        printf("%d",x[k-1]);
    }
    else
    {
        printf("NO RESULT");
    }
}