#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0 && i%3==0) printf("HelloWorld\n");
        else if(i%3==0) printf("World\n");
        else if(i%2==0) printf("Hello\n");
        else printf("%d\n",i);
    }
    return 0;
}