#include<stdio.h>
int main()
{
    int n,x,num=0,arr[1000];
    scanf("%d%d",&n,&x);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==x)
        {
            num++;
        }
    }
    if(num) printf("YES");
    else printf("NO");
    return 0;
}