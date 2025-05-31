#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t,n[5],stability=0;
    char *S[5],*s[5];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        S[i] = (char *)malloc((n[i] + 1) * sizeof(char));
        s[i] = (char *)malloc((n[i] + 1) * sizeof(char));
        scanf("%s",S[i]);
        for(int j=0;j<n[i];j++)
        {
            s[i][j]=S[i][n[i]-1-j];
            s[i][n[i]]='\0';
            if(s[i][j]=='A' && S[i][j]=='T' || s[i][j]=='T' && S[i][j]=='A' || s[i][j]=='C' && S[i][j]=='G' || s[i][j]=='G' && S[i][j]=='C')
            stability+=j+1;
            else if(s[i][j]=='U' || S[i][j]=='U')
            {
                stability=0;
                break;
            }    
        }
        printf("%d\n",stability);
        stability=0;
        free(S[i]);
        free(s[i]);
    }
    return 0;
}