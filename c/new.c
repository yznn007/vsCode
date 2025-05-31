#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i;
int j;
double probability(int frequency,int circulate)
{
    double probability;
    int victory=0;
    int total=0;
    for(j=0;j<=circulate;j++)
    {
        if(frequency==4)
        {
            for(i=0;i<4;i++)
            {
                if(rand()%6==0)
                {
                    victory++;
                    break;
                }
            }
        }
        else
        {
            for(i=0;i<24;i++)
            {
                if(rand()%6==0 && rand()%6==0)
                {
                    victory++;
                    break;
                }
            }
        }
        total+=victory;
        victory=0;
    }
    probability=total*1.000/circulate;
    return probability;
}
int main()
{
    srand(time(0));
    double result1=0;
    result1=probability(4,100000);
    double result2=0;
    result2=probability(24,100000);
    printf("第一个游戏的概率是：%.4f",result1);
    printf("第二个游戏的概率是：%.4f",result2);
}