#include<stdio.h>
int main()
{
    int sum1,sum2,sum3;
    sum1=sum2=sum3=0;
    for(int i=0;i<8;i++)
    {
        int temp;
        scanf("%d",&temp);
        sum1+=temp;
        if(sum1>=80)
        {
            for(int j=0;j<4;j++)
            {
                scanf("%d",&temp);
                sum2+=temp;
            }
            if(sum2>=40)
            {
                for(int k=0;k<3;k++)
                {
                    scanf("%d",&temp);
                    sum3+=temp;
                }
            }
        }
    }
    printf("%d",sum1+sum2+sum3);
    return 0;
}