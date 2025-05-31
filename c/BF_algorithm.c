#include<stdio.h>
#include<string.h>
int sort(char *s, char *t)
{
    int len_s = strlen(s);
    int len_t = strlen(t);
    int i, j;
    for(i = 0; i<len_s-len_t; i++)
    {
        int k=0;
        for(j = i; j < len_s-len_t; j++) 
            if(s[j] == t[k]) 
                k++;
        if(k == len_t)
            return j+1;
    }
    return -1;
}
int main()
{
    char s[1024];
    char t[1024];
    scanf("%s%s", s,t);
    printf("%d",sort(s,t));
    return 0;
}
