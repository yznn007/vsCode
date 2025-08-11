#include <stdio.h>
#include <stdlib.h>
typedef int elemtype;
typedef struct LinkedStackNode 
{	
	elemtype data;
	struct LinkedStackNode * next;
} LinkedStackNode, * LinkedStack;                                  
  LinkedStack top;

//初始化
LinkedStack Init_LinkedStack()                                       
{	
	LinkedStack top=(LinkedStackNode * )malloc (sizeof( LinkedStackNode));
	if(top!=NULL)//申请空间成功
	top->next=NULL;//设置栈顶指针为空
	return top;
}

//判栈空
int LinkedStack_Empty(LinkedStack top)                            
{	
	if(top->next==NULL)//检查栈顶指针的值 
	{
		return 1;//栈S为空，函数返回1
	}	
	else
	{
		return 0;
	}
}

//入栈
int Push_LinkedStack(LinkedStack top,elemtype x)                     
	//插入数据元素x为新的栈顶元素
{	
	LinkedStackNode * node;
	node=(LinkedStackNode * )malloc(sizeof(LinkedStackNode));
	if(node==NULL)
	{
		return 0;//申请结点空间失败,插入失败，函数返回0
	}
	else
	{
		node->data=x;//设置新结点的数据域
		node->next=top->next;//设置新结点的指针城
		top->next=node;//设置头结点指针城指向新的栈顶元素
		return 1;//插入成功，函数返回1
	}
}

//求栈长
int Length_LinkedStack(LinkedStack top)                                       
{
	int count = 0;
	while(top->next!=NULL) 
	{
		++count;
		top=top->next;
	}
	return count;
}

//出栈
int Pop_LinkedStack(LinkedStack top, elemtype *x)                    
{	LinkedStackNode * node;
	if(top->next==NULL)
	{
		return 0;
	}
	else
	{
		node=top->next;//将原栈顶数据元素弹出并赋给node
		*x=node->data;//将原栈顶数据元素的数据赋值给x
		top->next=node->next;//top指向链栈中的下一个数据元素
		free (node);//释放原栈顶数据元素所占的空间
		return 1;
	}
}  

//取栈顶元素
int GetTop_LinkedStack(LinkedStack top)                
{ 
	if(top->next)
      {
            return top->next->data;

      }
      return -1;
}

//主函数
void main()
{
	int i,t,x,a[20];
	LinkedStack top=Init_LinkedStack();//初始化栈
	x=LinkedStack_Empty(top);//判栈空结果赋值给X
	if(x=0)
	{
		printf("栈为空\n");
	}

	printf("请依次输入5个数,开始入栈：\n");
	for(i=0;i<5;i++) 
	{
		scanf("%d",&a[i]);
		Push_LinkedStack(top,a[i]);
		x=GetTop_LinkedStack(top);
		if(x!=-1)
		{
			printf("当前栈顶元素为%d\n",x);
		}
	}
	printf("入栈结束\n");
	printf("栈长为%d\n",Length_LinkedStack(top));
	printf("开始出栈:\n");
	for (i=0;i<5;i++)
	{
		Pop_LinkedStack(top,&t);
        printf("%d",t);
	}
	printf("\n");
	printf("出栈后栈长为%d\n",Length_LinkedStack(top));
}
