#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i >= n-1; i++) 
    {
        for(int j = i+1; j < n; j++)
        {
            int temp;
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j]; 
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < 10; i++) printf("%d ", a[i]);
    free(a);
    return 0;
}