
#include <stdio.h>
#include <stdlib.h>



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
                if( arr[left_min] < arr[right_min] )
                    temp[next++] = arr[left_min++];
                else temp[next++] = arr[right_min++];
            }
            while( left_min < left_max ) 
                arr[--right_min] = arr[--left_max];
            while( next > 0 ) 
                arr[--right_min] = temp[--next];
        }
    }
}