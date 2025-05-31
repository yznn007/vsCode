#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char *inputs[6]; 
    char buffer[100];
    int i;
    for (i = 0; i < 6; i++) {
        scanf("%99s", buffer); 
        inputs[i] = (char *)malloc(strlen(buffer) + 1); 
        strcpy(inputs[i], buffer);
    }
    qsort(inputs, 6, sizeof(char *), compareStrings);
    for (i = 0; i < 6; i++) {
        printf("%s\n", inputs[i]);
        free(inputs[i]); 
    }
    return 0;
}