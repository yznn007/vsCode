#include<stdio.h>
#include<stdlib.h>
int search(int *list,int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(list[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,x,*list;
    printf("Input n:");
    scanf("%d",&n);
    printf("Input %d integers:",n);
    int i;
    list = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
    printf("Input x:");
    scanf("%d",&x);
    if(search(list,n,x)==-1) printf("Not found");
    else printf("index = %d",search(list,n,x));
    return 0;
}