#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct students
{
char name[12];
float score;
};
int main()
{
	int m=3,n;
void enquire(struct students stu[],float score);
void sele(struct students stu[],int m);
void search(struct students stu[]);
void above(struct students stu[],float grade);
struct students stu[3]={{"xiaofeng",520.10},{"wuxin",131.40},{"xiaohua",491.00}};
printf("%s  %s  %s\n",stu[0].name,stu[1].name,stu[2].name);
printf("%5.2f   %5.2f   %5.2f\n",stu[0].score,stu[1].score,stu[2].score);
printf("Please choose 1,2,3or4:");
scanf("%d",&n);
if(n==1)
{
		float score;
printf("Please enter enquire score:");
scanf("%5.2f",&score);
enquire(stu,score);
}
else if(n==2)	sele(stu,m);
else if(n==3) search(stu);
else if(n==4)
{
	float grade;
	printf("Please enter beyond grade:");
	scanf("%5.2f",&grade);
    above(stu,grade);	
}
return 0;
}
 void  enquire(struct students stu[],float m )
{
	int i;
	for(i=0;i<3;i++)
	{
		if(stu[i].score==m)
			printf("%s   %5.2f\n",stu[i].name,stu[i].score);
	}
}
void sele(struct students stu[],int m)
{
	int i,j,temp;
	for(i=0;i<m-1;i++)
	{
		temp=i;
		for(j=i+1;j<m;j++)
		{
			if(stu[j].score>stu[i].score)
			{
				temp=stu[j].score;
				stu[j].score=stu[i].score;
				stu[i].score=temp;
			}
		}

		printf("The max score is:%s   %5.2f\n",stu[i].name,stu[i].score);
	}
}
void search(struct students stu[])
{
	int i;
	char *name;
	printf("Please enter search name:");
	scanf("%s",name);
	for(i=0;i<3;i++)
	{
		if(strcmp(stu[i].name,name)==0)
		{
			printf("%s   %5.2f",stu[i].name,stu[i].score);
		}
		else
			printf("NO FOUND!");
	}
}
void above(struct students stu[], float grade)
{
    for (int i = 0; i < 3; i++)
	{
        if (stu[i].score > grade) 
		{
            printf("%s: %d\n", stu[i].name, stu[i].score);
        }
    }
}