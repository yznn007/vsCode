#include<stdio.h>
#include<string.h>
int main()
{
    char arr[80],ch;
    int count=0,i=0;
    printf("Input a character:");
    scanf("%c",&ch);
    printf("Input a string:");
    do
    {
        scanf("%c",&arr[i]);
    }
    while(arr[i++]!='\0');
    while(arr[i-2]!='\0')
    {
        if(arr[i]==ch)
        {
            printf("index=%d",i-1);
            count=-1;
            break;
        }
        i--;
    }
    if(count!=-1) printf("Not Found");
    return 0;
}
