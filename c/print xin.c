#include<stdio.h>
int main ()
{   int i,j,k=4;
    for(i=0;i<4;i++)
    {
        for(j=k;j>0;j--) printf("*");
        printf("\n");
        k--;
    }
    return 0;
}