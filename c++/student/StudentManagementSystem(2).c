#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 15
#define MAX_ID 15

typedef struct Student
{
	char name[MAX_NAME];
	char id[MAX_ID];
	int score[3];
	int total;
	double average;
}Student;

typedef Student SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next; 
}SListNode;

//创建head
SListNode* CreateHead();

//申请节点
SListNode* BuyListNode(SLTDataType x);

//尾插法
void AddSystem(SListNode** pplist);

//查询
void SearchSystem(SListNode* plist);

//删除
void DelSystem(SListNode** pplist);

//插入
void InsertSystem(SListNode** pplist);

//修改
void ModifySystem(SListNode** pplist);

//打印
void PrintSystem(SListNode* plist);

//排序
void SortSystem(SListNode** pplist);

//成绩信息统计
void StatisticsSystem(SListNode* plist);

enum Optinon
{
	Exit,
	Add,
	Show,
	Search,
	Sort,
	Del,
	Insert,
	Statistics,
};


void menu()
{
	printf("——————————————————————————————————————————————\n");
	printf("*************  学生成绩管理系统  *************\n");
	printf("*****  1. Add                 2. Show    *****\n");
	printf("*****  3. Search              4.Sort     *****\n");
	printf("*****  5. Del                 6. Insert  *****\n");
	printf("*****  7. Statistics          0. Exit    *****\n");
	printf("**********************************************\n");
}

int main()
{
	SListNode* Plist = CreateHead();
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddSystem(&Plist);
			break;
		case Del:
			DelSystem(&Plist);
			break;
		case Search:
			SearchSystem(Plist);
			break;
		case Show:
			PrintSystem(Plist);
			break;
		case Insert:
			InsertSystem(&Plist);
			break;
		case Sort:
			SortSystem(&Plist);
			break;
		case Statistics:
			StatisticsSystem(Plist);
			break;
		case Exit:
			printf("退出该系统\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
SListNode* CreateHead()
{
	SListNode* plist = (SListNode *)malloc(sizeof(SListNode));
	plist->next = NULL;
	return plist;
}
SListNode* BuyListNode(SLTDataType x)
{
	SListNode* plist = (SListNode *)malloc(sizeof(SListNode));
	plist->data = x;
	plist->next = NULL;
	return plist;
}

// 尾插法
void AddSystem(SListNode** pplist)
{
	Student s;

	printf("请输入名字:");
	scanf("%s", s.name);
	printf("请输入学号:");
	scanf("%s", s.id);
	printf("请输入语文成绩:");
	scanf("%d", &(s.score[0]));
	printf("请输入数学成绩:");
	scanf("%d", &(s.score[1]));
	printf("请输入英语成绩:");
	scanf("%d", &(s.score[2]));

	s.total = s.score[0] + s.score[1] + s.score[2];
	s.average = s.total / 3.0;
	printf("录入成功\n");

	SListNode* NewNode = BuyListNode(s);
	SListNode* tail = *pplist;
	
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = NewNode;
}

//查询
void SearchSystem(SListNode* plist)
{
	SListNode* cur = plist->next;

	int flag = 0;

	while (1)
	{
		char input[99];
		
		printf("请输入你要查询的方式,grade(总分成绩) or name(姓名):");
		scanf("%s", input);
		if (strcmp(input, "name") == 0)
		{
			char Name[MAX_NAME];
			printf("请输入你要查询的名字:");
			scanf("%s", Name);

			while (cur != NULL)
			{
				if (0 == strcmp(cur->data.name, Name))
				{
					flag = 1;
					printf("%-15s\t%-15s\t%-7s\t%-7s\t%-7s\t%-7s\t%-7s\n", 
						"名字","学号","语文","数学","英语","总分","平均分");
					printf("%-15s\t%-15s\t%-7d\t%-7d\t%-7d\t%-7d\t%-7.2lf\n",
						cur->data.name,cur->data.id,cur->data.score[0],
						cur->data.score[1],cur->data.score[2],
						cur->data.total,cur->data.average);
					break;
				}
				cur = cur->next;
			}
			if (0 == flag)
			{
				printf("没有这个学生\n");
			}
			break;
		}
		else if (strcmp(input, "grade") == 0)
		{
			int score = 0;
			printf("请输入你要查询的总分成绩:");
			scanf("%d", &score);
			while (cur != NULL)
			{
				if (cur->data.total == score)
				{
					flag = 1;
					printf("%-15s\t%-15s\t%-7s\t%-7s\t%-7s\t%-7s\t%-7s\n", 
						"名字","学号","语文","数学","英语","总分","平均分");
					printf("%-15s\t%-15s\t%-7d\t%-7d\t%-7d\t%-7d\t%-7.2lf\n",
						cur->data.name,cur->data.id,cur->data.score[0],
						cur->data.score[1],cur->data.score[2],
						cur->data.total,cur->data.average);
					break;
				}
				
				cur = cur->next;
			}
			if (0 == flag)
			{
				printf("没有这个学生\n");
			}
			break;
		}

		else
		{
			printf("输入错误,请重新输入\n");
		}

	}
}

SListNode* SListFind(SListNode* plist, char name[])
{
	SListNode* cur = plist->next;
	SListNode* pos = plist;

	if (cur == NULL)
	{
		return NULL;
	}

	while (cur!= NULL)
	{
		if (strcmp(cur->data.name, name) == 0)
		{
			return pos;
		}
		pos = pos->next;
		cur = cur->next;
		
	}
	return NULL;
}
// 插入
void InsertSystem(SListNode ** pplist)
{
	Student s;

	printf("请输入名字:");
	scanf("%s", s.name);
	printf("请输入学号:");
	scanf("%s", s.id);
	printf("请输入语文成绩:");
	scanf("%d", &(s.score[0]));
	printf("请输入数学成绩:");
	scanf("%d", &(s.score[1]));
	printf("请输入英语成绩:");
	scanf("%d", &(s.score[2]));

	s.total = s.score[0] + s.score[1] + s.score[2];
	s.average = s.total / 3.0;
	printf("插入成功\n");

	SListNode* NewNode = BuyListNode(s);
	SListNode* tail = *pplist;
	
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = NewNode;
	SortSystem(pplist);
    return;
}
//删除
void DelSystem(SListNode** pplist)
{
	char name[MAX_NAME];
	printf("请输入要删除学生的名字:");
	scanf("%s", name);

	SListNode* cur = (*pplist)->next;
	SListNode* del = SListFind(*pplist, name);

	if (del == NULL)
	{
		printf("要删除的学生不存在\n");
	}
	else
	{
		SListNode* tmp = del->next->next;
		free(del->next);
		del->next = tmp;
		printf("删除成功\n");
	}
}

//修改
void ModifySystem(SListNode** pplist)
{

	char name[MAX_NAME];
	printf("请输入要修改的学生的名字:");
	scanf("%s", name);
	

	SListNode* mod = SListFind(*pplist, name);
	if (NULL == mod)
	{
		printf("要修改的学生不存在\n");
	}
	else
	{
		mod = mod->next;

		printf("请输入名字:");
		scanf("%s", mod->data.name);
		getchar();
		printf("请输入学号:");
		scanf("%s", mod->data.id);
		getchar();
		printf("请输入语文成绩:");
		scanf("%d", &(mod->data.score[0]));
		getchar();
		printf("请输入数学成绩:");
		scanf("%d", &(mod->data.score[1]));
		getchar();
		printf("请输入英语成绩:");
		scanf("%d", &(mod->data.score[2]));
		getchar();

		mod->data.total = mod->data.score[0] + mod->data.score[1] +
			mod->data.score[2];
		mod->data.average = mod->data.total / 3.0;
		printf("修改成功\n");
	}
}

//成绩信息打印
void PrintSystem(SListNode* plist)
{
	SListNode* cur = plist->next;
	printf("%-15s\t%-15s\t%-7s\t%-7s\t%-7s\t%-7s\t%-7s\n", 
		"名字","学号","语文","数学","英语","总分","平均分");
					
	while (cur)
	{
		printf("%-15s\t%-15s\t%-7d\t%-7d\t%-7d\t%-7d\t%-7.2lf\n",
			cur->data.name,cur->data.id,cur->data.score[0],
			cur->data.score[1],cur->data.score[2],
			cur->data.total,cur->data.average);
		cur = cur->next;	
	}
}

//总分排序
void SortToal(SListNode** pplist)
{
	for (SListNode* p = (*pplist)->next; p != NULL; p = p->next)
	{
		for (SListNode* q = p->next; q != NULL; q = q->next)
		{
			if (p->data.total < q->data.total)
			{
				SListNode tmp;
				tmp.data = p->data;
				p->data = q->data;
				q->data = tmp.data;
			}
		}
	}
}

void SortSystem(SListNode** pplist)
{

	while (1)
	{
		SortToal(pplist);
		PrintSystem(*pplist);
		break;
	}
}

//成绩信息统计
void StatisticsSystem(SListNode* plist)
{
	int grade = 0;
	int sum = 0;
	printf("请输入学科成绩的分界线:>");
	scanf("%d", &grade);

	SListNode* cur = plist->next;

	printf("%-15s\t%-15s\t%-7s\t%-7s\t%-7s\t%-7s\t%-7s\n",
		"名字","学号","语文","数学","英语","总分","平均分");
	
	while (cur)
	{
		
		if (cur->data.total > grade )
		{
			printf("%-15s\t%-15s\t%-7d\t%-7d\t%-7d\t%-7d\t%-7.2lf\n", 	
				cur->data.name,cur->data.id,cur->data.score[0],
				cur->data.score[1],cur->data.score[2],
				cur->data.total,cur->data.average);
				sum++;
		}
		cur = cur->next;	
	}
	printf("           **********************成绩在%d之上的共有%d个学生***********************          \n", grade, sum);
}