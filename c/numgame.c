#include <stdio.h>
int main()
{
    int x[101],y[101],i=0;
    do
    {
        scanf("%d",&x[i]);
        i++;
    }
    while(x[i-1]!=0);
    for(int j=0;j<i-1;j++)
    {
        y[j]=x[i-j-2];
        printf("%d ",y[j]);
    }
    return 0;
}