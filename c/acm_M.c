#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(b<a && b<c)
    {
        if(a<c) printf("%d",a-b);
        else printf("%d",c-b);
    }
    else printf("0");
    return 0;
}