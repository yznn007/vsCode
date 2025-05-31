#include<stdio.h>

int main()
{
    int n;
    int a,sum=0;
    scanf("%d %d", &a, &n);
    int aa=a;
    for(int i=0; i<n; i++)
    {
        
        sum +=a;
        a=a*10+aa;
    }
    // sum=999999999+99999999+9999999+999999+99999+9999+999+99+9;
    printf("%d",sum);
    return 0;
}