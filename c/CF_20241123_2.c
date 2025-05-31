#include<stdio.h>
#include<string.h>
int a(char str[])
{
    int num = 0;
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        for(int j=i;j<len; j++)
            num++;
    }
    return num;
}
int main()
{
    char str[100000];
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%s", str);
        int len = strlen(str);
         if(len == 1 || len == 2)
            printf("-1\n");
        else
        {
            if(a(str)%2 == 0)
                printf("%c%c\n", str[0],str[1]);
            else
                printf("-1\n");
        }
    }
    return 0;
}
