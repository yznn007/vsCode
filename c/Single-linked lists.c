#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TSIZE 45

struct film
{
    char title[TSIZE];
    int rating;
    struct film *next;
};
char * s_gets(char * st,int n);
int main()
{
    struct film * head = NULL;
    struct film * prev, *current;
    char input [TSIZE];
    puts("Enter first movie title:");
    while(s_gets(input, TSIZE) != NULL && input[0] != '\0')
    {
        current = (struct film*)malloc(sizeof(struct film));
        if(head == NULL)
            head = current;
        else
            prev->next = current;
        puts("Enter your rating <0-10>:");
        scanf("%d",&current->rating);
        while(getchar() != '\n');
            continue;
        puts("Enier next movie title (emply line to stop): ");
        prev = current;
    }
    if (head == NULL)
        printf("No data entered. ");
    else
        printf("Here is the movie list: ");
    current = head;
    while(current!= NULL)
    {
        printf("Movie : %s rating: %d\n",current->title,current->rating);
        current = current->next;
    }
    current = head;
    while (current != NULL)
    {
        head = current->next;
        free(current);
        current = head;
    }
    printf("bye!\n"); 

    return 0;
}
char* s_gets(char* st,int n)
{
    char* ret_val;
    char* find;
    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        find = strchr(st, '\n');
        if(find)
            *find = '\0';
        else
            while(getchar()!= '\n')
                continue;
    }
    return ret_val;
}