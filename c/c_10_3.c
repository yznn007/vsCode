#include<stdio.h>
#include<string.h>
void delchar(char c, char *s)
{
    int i, j=0;
    for(i=0; s[i]; i++)
    {
        if(s[i]!=c)
        {
            s[j++]=s[i];
        }
    }
    s[j]='\0'; 
    printf("After deleted,the string is:%s\n",s);
}
int main() 
{
    char s[1000],c;
    printf("Input a string:");
    gets(s);
    printf("Input a char:");
    scanf("%c",&c);
    delchar(c,s);
    return 0;
}