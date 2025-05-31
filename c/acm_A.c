#include<stdio.h>
#include<math.h>
void prime_num(int *prn)
{   int k=0;
    prn[k++]=2;
    for(int i=3;i<200000;i++)
    {
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0) break;
            else prn[k++]=i;
        }
    }
}
int main()
{
    int arr[200000],n,q,num,prn[200000];
    scanf("%d%d",&n,&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d",&num);
        for(int j=0;j<num;j++)
        {
            

            
        }
    }
    return 0;
}