#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,k,sum,max=0;
    scanf("%d", &n);
    int * arr = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n-2*k+2; j+2)
            sum += arr[j];
        if(sum>max) max = sum;
    }
    free(arr);
    printf("%d",max);
    return 0;
}