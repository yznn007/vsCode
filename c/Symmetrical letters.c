#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90) printf("%c",155-ch);
    else if(ch>=97 && ch<=122) printf("%c",219-ch);
    else printf("It is not a letter.");
    return 0;
}