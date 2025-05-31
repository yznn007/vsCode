#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long  int t,tt=0,T;
    int count=0,num=0;    
    scanf("%d",&t);
    T=t;
    while(T!=0)
    {
        T/=10;
        count++;
    }
    for(int i=0;i<count,count-1-i>0;i++)
    {   
        int x=count-1-i;
        T=t;
        T=T/pow(10,x);
        T%=10;
        tt=tt+T*pow(10,i);
    }
    tt+=t*pow(10,count-1);
    for(int i=2;i<sqrt(tt);i++)
    {
        if(tt%i==0) num=1;
    }
    if(num==0) printf("prime");
    else printf("noprime");
    return 0;
}