#include<stdio.h>
double grade(int n)
{
    int add=0,grade[1001];
    double result;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&grade[i]);
        add+=grade[i];
    }
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-j-1;i++)
        {
            if(grade[i]>grade[i+1])
            {
                int k=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=k;
            }
        }
    }
    result=(add*1.0-(grade[0]+grade[n-1]))/(n-2);
    return result;
}
int main()
{
    int n,m;
    double NO_1,stu[100];
    scanf("%d%d",&n,&m);

    for(int i=0;i<n;i++)
    {
        stu[i]=grade(m);
    if(!(i))NO_1=stu[0];
        if(stu[i]>NO_1)
        {
            int j=NO_1;
            NO_1=stu[i];
            stu[i]=j;
        }
    }
    printf("%.2lf",NO_1);
    return 0;
}