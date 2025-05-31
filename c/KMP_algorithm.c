#include<stdio.h>
void get_next(char T[],int * next)
{
    int i=0,j=1;
    next[0] = strlen(T);
    while(j<next[0])
    {    if(T[i] == T[j])
        {
            i++;
            next[j++] += i+1;
        }
        else if(T[i] != T[j]) i = 0;
    }
}
int index_KMP(char*S, char*T)
{
    int i=0,j=0;
    while(j<next[0])
    {
        if(S[i] == T[j]);
    }
}
int main()
{
    int next[100];
    char T[100];
    char S[100];
    scanf("%s%s",T,S);
    get_next(T,next);
    index_KMP(S,T);


    return 0;
}