#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 20
typedef struct     
{
	char id[N];
	char name[N];
	double price;
}Book;
 
typedef struct         
{
	Book* data;           
	int length;           
}SQlist;
 
void InitList(SQlist* L)            
{
	L->data = (Book*)malloc(sizeof(Book)*N);     
	L->length = 0;                                
}
 
void CreateList(SQlist* L,int n)      
{
	int i;
	for (i = 0; i < n; i++)            
	{
		printf("请输入第%d个数据：", i+1);
		scanf("%s %s %lf", &L->data[i].id, &L->data[i].name, &L->data[i].price);
	}
	L->length = i;               
}
 
void printfList(SQlist* L)       
{
	int i;
	for (i = 0; i < L->length; i++)            
	{
		printf("%s %s %.2lf\n", L->data[i].id, L->data[i].name, L->data[i].price);
	}
}
 
int Getdata(SQlist* L, Book *x)      
{
	int i = 0;
	printf("input i：");
	scanf("%d", &i);
	if (i<1 || i>L->length)      
	{
		printf("输入位置错误\n");
		return 0;
	}
	else
	{
		*x = L->data[i - 1];  
		return 1;
	}
}
 
int Getdata2(SQlist* L)       
{
	Book x;
	printf("input data:");
	scanf("%s %s %lf", &x.id, &x.name, &x.price);
	int i;
	for (i = 0; i < L->length; i++)                  
	{
		if (strcmp(x.id, L->data[i].id) == 0 && strcmp(x.name, L->data[i].name)==0 && x.price == L->data[i].price)
		{
			printf("位置为：%d\n", i + 1);
			return 1;
		}
	}
	if (i = L->length)                           
	{ 
		printf("未找到该数据\n");
	}
	return 0;
}
 
int Insdata(SQlist* L)            
{
	Book x;
	int i = 0, j = 0;
	printf("input data:");
	scanf("%s %s %lf", &x.id, &x.name, &x.price);
	printf("input i:");
	scanf("%d", &i);
	if (i<1 || i>L->length + 1)              
	{
		printf("输入位置错误\n");
		return 0;
	}
	if (L->length >= N)            
	{
		printf("表满\n");
		return 0;
	}
	if (i == L->length + 1)            
	{
		L->data[i - 1] = x;
		L->length++;
		return 0;
	}
	for (j = L->length - 1; j >= i - 1; j--)              
	{
		L->data[j + 1] = L->data[j];         
	}
	L->data[i - 1] = x;
	L->length++;
	return 1;
 
}
 
int DelList(SQlist* L,Book *x)        
{
	int i = 0;
	int j = 0;
	printf("input i:");
	scanf("%d", &i);
	if (i<1 || i>L->length)               
	{
		printf("输入位置错误\n");
		return 0;
	}
	if (L->length ==0 )             
	{
		printf("表为空\n");
		return 0;
	}
	*x = L->data[i - 1];
	for (j = i; j < L->length; j++)
	{
		L->data[j - 1] = L->data[j];         
	}
	L->length--;               
	return 1;
}

void TraverseList(SQlist* L)
{
    int i = 0;
    for(i = 0;i < L->length;i++)
	{
		printf("%c %c %llf\n",L->data[i].id,L->data[i].name,L->data[i].price);
	}
}
int main()
{
	SQlist L;
	Book x;
	Book Del;
	int n=0;
	//输入数据个数
	printf("input n:");
	scanf("%d", &n);
	//初始化
	InitList(&L);
	//创建链表并输出
	CreateList(&L,n);
	printfList(&L);
	//按位置求值
	Getdata(&L,&x);
	printf("%s %s %.2lf\n", x.id,x.name,x.price);
	//按值求位置
	Getdata2(&L);
	//插入数据并输出
	Insdata(&L);
	printfList(&L);
	//删除数据并输出
	DelList(&L,&Del);
	//遍历顺序表
	TraverseList(&L);
	return 0;
}