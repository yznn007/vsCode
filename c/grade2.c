#include<stdio.h>
int main()
{
    int grade;
    scanf("%d",&grade);
    grade/=10;
    if(grade==9) printf("A");
    else if(grade==8) printf("B");
    else if(grade==7) printf("C");
    else if(grade==6) printf("D");
    else if(grade<=6 && grade>=0)printf("E");
    else printf("Data error");
    return 0;
}