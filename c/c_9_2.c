#include<stdio.h>
#include<string.h>
int main()
{
    char str[6][100];
    int j,i;
    for(j=0;j<6;j++)
    {
        i=0;
        do
        {
            scanf("%c",&str[j][i]);
        }
        while(str[j][i++]=='\0');
    }
    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],str[i+1])>0)
        {
            char temp[100];
            strcpy(temp,str[i]);
            strcpy(str[i],str[i+1]);
            strcpy(str[i+1],temp);
        }
    }
    for(i=0;i<6;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}