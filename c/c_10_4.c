#include<stdio.h>
#include<math.h>
int loop(int x)
{
    int ii = x,i,count = 0,num = 0;
    while(ii != 0)
    {
        ii/=10;
        count++;
    }
    if(x < 10) return 1;
    ii=x;
    for(i=0;i<count;i++)
    {
        int iii=ii;
        iii%=10;
        num = num*10+iii;
        ii/=10;
        
    }
    if(num != x)
        return 0;
    return 1;
}
int main() 
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i = a;i <= b;i++)
    {
        if(loop(i))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}