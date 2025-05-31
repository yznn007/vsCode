#include<stdio.h>
int main()
{
    int date1,date2;
    char op;
    scanf("%d %d %c",&date1,&date2,&op);
    if(op=='+')
    {
        printf("%d",date1+date2);
    }
    else if(op=='-')
    {
        printf("%d",date1-date2);
    }
    else if(op=='*')
    {
        printf("%d",date1*date2);
    }
    else
    {
        if(date1%date2==0)
        printf("%d",date1/date2);
        else
        printf("%.2f",1.0*date1/date2);
    }

    return 0;
}