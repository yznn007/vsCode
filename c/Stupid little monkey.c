#include<stdio.h>
int main()
{
    int  max,min=1,length,l=0;
    char word[100]={'\0'};
    scanf("%s",&word);
    length=0;
    for(int i=0;i<100;i++)
    {
        if(word[i]!='\0')
        {
            length++;
        }
        else
        {
            break;
        }
    }
    for(int j=0;j<length-1;j++)
    {
        for(int i=0;i<length-j-1;i++)
        {
            int k;
            if(word[i]!=word[i+1])
            {
                k=word[i];
                word[i]=word[i+1];
                word[i+1]=k;
            }
            else
            {
                k=word[i];
                word[i]=word[i+1];
                word[i+1]=k;
                (max)++;
            }
        }
    }
    int num=max-min;
    if(num==0 || num==1)
        printf("No Answer\n0");
    else if(num==2)
        printf("Lucky Word\n%d",num);
    else
    {
       for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                printf("No Answer\n0");
                break;
            }
            else
            {
                l++;
            }
            if(l)
            printf("Lucky Word\n%d",num);
        }
    }
    return 0;
}