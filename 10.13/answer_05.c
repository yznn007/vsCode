#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    srand(time(NULL));
    int d,n,l,N,x=10000000;
    double pii,result,add=0;
    for(int i=0;i<x;i++)
    {
        n=rand()+1;   //n是什么jb
        N=rand()+n+1;
        l=rand()+1;
        d=rand()+l+1;
        if(N<n)
        {
            i--;
            continue;
        }
        pii=(2.0*l/d)*(N/n);
        add+=pii;
    }
    result=add/x;
    printf("%.3lf",result);
    return 0;
}