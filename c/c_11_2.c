#include<stdio.h>
#include<stdlib.h>
int sort(int *a,int *b)
{
    return *a>*b?1:-1;
}
int main()
{
    int n,i;
    printf("Input n:");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    printf("Input array of %d integers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),sort);
    printf("After sorted the array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}