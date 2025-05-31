#include <stdio.h>
#include <stdlib.h>

void MergeSort( int* arr, int len );

int main( )
{
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    int *arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
    MergeSort(arr, N);

    int index = N - 2;
    int count = 0;
    int reTree = 1;
    int maxTree = arr[N-1];
    while (index >= 0 && count < M)
    {
        while( arr[index] == arr[index + 1] ) index--;
        for( int i = index + 1 ; i< N; i++ ) arr[i]--;
        count += N-1-index;
        if (count >= M) break;
        reTree++; 
    }
    printf("%d\n", maxTree-reTree);
    return 0;
}

void MergeSort( int* arr, int len )
{
    int left_min, left_max, right_min, right_max;
    int next;
    int *temp = ( int* )malloc( len * sizeof(int) );
    if( *temp == -1 ) return;
    for( int i = 1; i < len; i *= 2 )
    {
        for( left_min = 0; left_min < len - i; left_min = right_max )
        {
            right_min = left_max = left_min + i;
            right_max = right_min + i;
            if( right_max > len ) right_max = len;

            next = 0;
            while( left_min < left_max && right_min < right_max )
            {
                if( arr[left_min] < arr[right_min] ) temp[next++] = arr[left_min++];
                else temp[next++] = arr[right_min++];
            }
            while( left_min < left_max ) 
                arr[--right_min] = arr[--left_max];
            while( next > 0 ) 
                arr[--right_min] = temp[--next];
        }
    }
}
