#include<stdio.h>
int main()
{
    char str[70000];
    int i,j,l,r;
    i = j = l = r = 0;
    scanf("%s",str);
    while(str[j] != 'E')
    {
        for(i = 0; i < 11; i++)
        {
            j++;
            if(str[j] == 'W') r++;
            else if(str[j] == 'L') l++;
            else break;
        }
        printf("%d:%d\n",r,l);
        r=l=0;
    }
    printf("\n");
    while(str[j] != 'E')
    {
        for(i = 0; i < 21; i++)
        {
            j++;
            if(str[j] == 'W') r++;
            else if(str[j] == 'L') l++;
            else break;
        }
        printf("%d:%d\n",r,l);
        r=l=0;
    }
    return 0;
}