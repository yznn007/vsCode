#include<stdio.h>
#include<math.h>
int main()
{
    int a[10];
    int height;
    int num=0;
    for(int i=0;i<10;i++)
    {        
        scanf("%d",&a[i]);
    }
    scanf("%d",&height);
    for(int i=0;i<10;i++)
    {
        if(a[i]<=height)
        {
            num++;    
        }
        else
        {
            if(a[i]<=height+30)
            {
                num++;
            }
        }
    }
    printf("%d",num);
    return 0;
}