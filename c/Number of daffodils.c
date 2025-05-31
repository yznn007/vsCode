#include<stdio.h>
#include<math.h>
int is(int number)
{
    int daf;
    daf=pow(number%10,3)+pow(number%100/10,3)+pow(number%1000/100,3);
    if(daf==number) return 1;
    else return 0;
}
int main()
{
    int n,m,number;
    printf("Input m: ");
    scanf("%d",&m);
    printf("Input n: ");
    scanf("%d",&n);
    for(number=m+1;number<n;number++)
    {
        if(is(number)) printf("%d\n",number);
    }
    return 0;
}