#include<stdio.h>
#include<string.h>
int main()
{
    char str[201];
    gets(str);
    int num,space,letter,other;
    num=space=letter=other=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] ==' ')
        {
            space++;
        }
        else if(str[i]<='z' && str[i]>='a' || str[i]>='A' && str[i]<='Z')
        {
            letter++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            num++;
        }
        else
        {
            other++;
        }
    }
    printf("%d %d %d %d",letter,num,space,other);
    return 0;
}