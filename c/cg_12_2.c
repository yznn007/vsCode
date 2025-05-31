#include<stdio.h>
int search(int* arr, int n, int x)
{
    int i;
    for ( i = 0; i < x; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10]; int* p = arr;
    int n, i; int reasult;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &n);
    printf("input array data: input search data:");
    if (search(p, n, 10) == -1)
    {
        printf("NO!\n");
    }
    else
    {
        reasult = search(p, n, 10);
        printf("%d", reasult);
    }
    return 0;
    
}