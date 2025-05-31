#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,count=0;
    char chr,*str=(char*)malloc(n+1);
    scanf("%d %c",&n,&chr);
    scanf("%s",str);
    for(int i=0;i<n;i++)
    {
        if(str[i]==chr)
        {
            count++;
            int mi=1;
            while(1)
            {
                
                if(str[i-mi]!='\0' && str[i+mi]!='\0' && i-mi>=0 && i+mi<n)
                {
                    count++;
                    mi++;
                }
                else break;
            }
        }
    }
    free(str);
    printf("%d",count);
    return 0;
}