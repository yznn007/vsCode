#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int value;
    struct _node *next;
} Node;

void add(Node* head, int number);

int main(int argc, char const *argv[])
{
    Node * head = NULL;
    int number;
    do {
        scanf("%d", &number);
        if (number != -1) {
            add(head, number);
        }
    } while (number != -1);

    return 0;
}