#include<stdio.h>
int main()
{
    int str[100];
    int i=0;
    while(scanf("%d",&str[i]) != EOF)
    {
        printf("%c", (char)str[i++]);
    }
    return 0;
}