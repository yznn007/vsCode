#include <stdio.h>
#include <stdlib.h>

char iwannna (int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (2*arr[i] > arr[i + 1] || arr[i] < 2*arr[i + 1])
            return 'Y';
    }
    for (int i = 0; i < size - 2; i++) {
        if ((arr[i] + arr[i + 1] > arr[i + 2]) &&
            (arr[i] + arr[i + 2] > arr[i + 1]) &&
            (arr[i + 1] + arr[i + 2] > arr[i])) {
            return 'Y';
        }
    }

    return 'N';
}

int main () {
    int times = 0;
    scanf("%d", &times);
    int** arr = (int**)malloc(times * sizeof(int*));
    char* arr_res = (char*)malloc(times * sizeof(char));
    for (int i = 0; i < times; i++) {
        int size = 0;
        scanf("%d", &size);
        int* arr_i = (int*)malloc(size * sizeof(int));
        for (int j = 0; j < size; j++)
            scanf("%d", &arr_i[j]);
        arr_res[i] = iwannna(arr_i, size);
    }

    for (int i = 0; i < times; i++)
        arr_res[i] == 'Y' ? printf("YES\n") : printf("NO\n");
    free(arr_res);
    free(arr);

    return 0;
}