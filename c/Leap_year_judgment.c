#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int year;
    scanf("%d",&year);
    int month;
    scanf("%d",&month);
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        printf("Leap year,");
    }
    else
    {
        printf("Common year,");
    }
    if(month>=3 && month<=5)
    {
        printf("Spring,");
    }
    else if(month>=6 && month<=8)
    {
        printf("Summer,");
    }
    else if(month>=9 && month<=11)
    {
        printf("Fall,");
    }
    else
    {
        printf("Winter,");
    }
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 ||month==12)
    {
        printf("31");
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        printf("30");
    }
    else
    {
         if((year%4==0 && year%100!=0) || year%400==0)
        {
            printf("29");
        }
        else
        {
            printf("28");
        }
    }
    return 0;
}