#include<stdio.h>
void get_information(int n,char student[1000][8],int grades[1000][3]);
void compare(int n,int *best,char student[1000][8],int grades[1000][3]);
int main()
{
    int n,grades[1000][3];
    char student[1000][8];
    int best;
    scanf("%d",&n);
    get_information(n,student,grades);
    compare(n,&best,student,grades);
    printf("%s %d %d %d",student[best],grades[best][0],grades[best][1],
    grades[best][2]);
    return 0;
}
void get_information(int n,char student[1000][8],int grades[1000][3])
{
    for(int i=0;i<n;i++)
    {
        scanf("%s%d%d%d",&student[i],&grades[i][0],&grades[i][1],&grades[i][2]);
    }
}
void compare(int n,int *best,char student[1000][8],int grades[1000][3])
{   
    int add,max=0;
    for(int i=0;i<n;i++)
    {

        int add=0;
        add=grades[i][0]+grades[i][1]+grades[i][2];
        if(max<add)
        {
            max=add;
            *best=i;
        }
    }

}