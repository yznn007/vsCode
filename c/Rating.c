#include<stdio.h>
 struct Person
    {
        int Student_ID;
        int Academic;
        int performance;
        double Composite_score;
    }person[1001]={0,0,0,0};
int judge(struct Person
    {
        int Student_ID;
        int Academic;
        int performance;
        double Composite_score;
    }*person,int n)
{
    int j=0;
    for(;j<n;j++)
    {
        if(person[j].Composite_score>=80 && (person[j].Academic+person[j].performance>140))
        {
            printf("Excellent\n");
        }
        else
        {
            printf("Not excellent\n");
        }
    }    
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&person[i].Student_ID,&person[i].Academic,&person[i].performance);
        person[i].Composite_score=person[i].Academic*0.7+person[i].performance*0.3;
    }    
    judge(person,n);
    return 0;
}