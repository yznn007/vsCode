#include<stdio.h>
#include<string.h>
int main()
{
    char buffer[80];
    int i,count=0;
    printf("Input a string:");
    scanf("%s",buffer);
    for(i=0;i<strlen(buffer);i++)
    {
        if(buffer[i]>='A' && buffer[i]<='Z' && (buffer[i]!='A' && buffer[i]!='E' && buffer[i]!='I' && buffer[i]!='O' && buffer[i]!='U'))
        count++;
    }
    printf("count=%d",count);
    return 0;
}