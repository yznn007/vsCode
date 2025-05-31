#include<stdio.h>
int main()
{
    int k,j=0;
    char moves[10000][8]={0};
    scanf("%d",&k);
    for(int i=0;;i++)
    {
        scanf("%s",moves[i]);
        if(moves[i][0]=='E') break;
    }
    for(int i=0;;i++,j++)
    {
        if(moves[i][0]=='E') break;
        if(j==k)
        {
            printf("%s\n",moves[i]);
            j=-1;
            continue;
        }
        if(moves[i][0]=='C') printf("Bu\n");
        else if(moves[i][0]=='J') printf("ChuiZi\n");
        else if(moves[i][0]=='B') printf("JianDao\n");
    }
    return 0;
}