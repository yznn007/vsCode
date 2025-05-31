#include<stdio.h>
void judge(int * n)
{
    long long j=0,k=1,l;
    for(int i=2;i<100000;i++)
    {
        l=i;
        while(l>0)
        {
            if(l%10==0 || l%10==1 || l%10==4 || l%10==6 || l%10==8 || l%10==9)
            {
                j++;
                break;
            }
            l/=10;
        }
        if(j==0)
        {
            *(n+k)=i;
            k++;
        }
        j=0;
    }
}
int main() 
{ 
    int N,n[10001];
    scanf("%d",&N);
    judge(n);
    printf("%d",n[N]);
    return 0; 
}