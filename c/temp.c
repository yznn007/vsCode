#include <stdio.h>
#include <stdlib.h>

int* countArray (int* arr, int arrSize) {
    int* count = (int*)malloc(100001 * sizeof(int));
    for (int i = 0; i < arrSize; i++)
    {    
        count[arr[i]]++;
    }
    return count;
}

int compare(int * a, int * b) {
    if(*a < *b) return -1;
    if(*a > *b) return 1;
    return 0;   
}

int main () {
    int n = 0, q = 0;
    int sum = n;
    scanf("%d %d", &n, &q);

    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int* day = (int*)malloc(q * sizeof(int));
    for (int i = 0; i < q; i++)
        scanf("%d", &day[i]);
    qsort(day, q, sizeof(int), compare);
    int* count = countArray(arr, n);
    for(int i = 0; i < q; i++)
    {
        sum -= count[day[i]];

    }
    return 0;
}