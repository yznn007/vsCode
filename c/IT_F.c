#include<stdio.h>
int main()
{
    char str[100][100],i=0,count=0,j=0,k=0,one=0,two=0,three;
    while(str[])
    {
        scanf("%s", &str[i]);
        while(str[i][0]!='\0')
        {
            if(str[i][j]=='+')
            {
                for(k=0 ;k<j ;k++)
                    one+=str[i][k]-48;
                for(k=j+1 ;k!='=';k++)
                    two+=str[i][k]-48;
                for(k=k+1;k!='\0';k++)
                    three+=str[i][k]-48;
                if(one + two == three)
                    count++;
            }
            if(str[i][j]=='-')
            {
                for(k=0 ;k<j ;k++)
                    one+=str[i][k]-48;
                for(k=j+1 ;k!='=';k++)
                    two+=str[i][k]-48;
                for(k=k+1;k!='\0';k++)
                    three+=str[i][k]-48;
                if(one - two == three)
                    count++;
            }
            j++;
        }
        i++;
    }
    printf("%d\n",count);
    return 0;
}