#include<stdio.h>
int prime_number(int n,int sz[]) //将质数存放在数组中
{
    int j=1,m=0;
    for(int i=3;i<n;i++)
    {
        for(int k=2;k<i;k++) if(i%k==0) m++;           
        if(!(m)) sz[j++]=i;
        m=0;
    }
}
int main()
{
    int n,sz[10000]={2},j,i;
    scanf("%d",&n);
    prime_number(n,sz);
    for(int x=4;x<=n;x++) //遍历4~n
    {   
        if(x%2==0)
        {
            for(j=0;j<x;j++)
            {
                for(i=0;i<x;i++)
                {
                    if(sz[j]+sz[i]==x)
                    {
                        printf("%d=%d+%d\n",x,sz[j],sz[i]);
                        break;
                    }   
                }
                if(sz[j]+sz[i]==x) break; 
            }
        }
    }
    return 0;
}