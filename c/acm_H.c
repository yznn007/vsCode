#include<stdio.h>
int main()
{
    int i=0,num=0,count=0;
    char str[1001];
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]<='z' && str[i]>='a' || str[i]<='Z' && str[i]>='A' || str[i]>='0' && str[i]<='9')
        {
            for(int j=0;j<i;j++)
            {
                if(str[j]==str[i]) num++;
            }
            if(num==0) count++;
            i++;
            num=0;
        } 
    }
    printf("%d",count);
    return 0;
}