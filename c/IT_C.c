#include<stdio.h>
#include<string.h>
int main()
{
    int num,sum=0;
    scanf("%d", &num);
    for(int i = 1; i < num; i++)
    {
        if(num%i==0) sum+=i;
    }
    if(sum == num) printf("YES"); 
    else
    {
        printf("NO");
    }
    return 0;
}