#include<bits/stdc++.h>
using namespace std;
// 定义节点
typedef struct node
{
    int data;              
    struct node *next;     
}Node,*Link;   
//创建新链表
Link newList()
{   
    Link head = new Node;        //创建头结点
    head->next = nullptr;

    return head;
}
//头插
Link pushFrontNode(Link head)
{ 
    Node node;
    int x;
    cin >> x;
    node.data = x;
    node.next = head->next;
    head->next = &node;

    return head;
}
//尾插
Link pushBackNode(Link head)
{
    Link rear = new Node;
    rear = head;
    int x;
    cin >> x;
    while(rear->next != nullptr) rear = rear->next;  

    Link node = new Node;
    node->data = x;
    rear->next = node;
    rear = node;
    rear->next = nullptr;  

    return head;
}

//遍历
void displayNode(Link head) 
{
    Link p = head->next;   

    while(p != nullptr)
    {
        cout << p->data << " ";   
        p = p->next;             
    }
}
//查找
bool queryNode(Link head)
{
    Link p = head->next;
    int x;
    cin >> x;

    while(p != nullptr)
    {
        if(p->data == x) //查找成功
        {
            cout << p->data << " ";
            return true;
        }
        p = p->next;   
    }

    return false;     //查找失败
}
//插入
bool insertNode(Link head)
{
    int index;
    int x;
    cin >> index >> x;
	int count=0;
    Link p = head;
    Link node = new Node;

    while(p != nullptr && count < index-1)   //找到index前一个结点
    {
        p = p->next;
        count++;
    }

    if(p == nullptr) return false;           //没有找到
    else
    {
        node->data = x;                
        node->next = p->next;            
        p->next = node;
        return true;
    }
}
//删除
bool deleteNode(Link head)
{
    Link p;
    int x;
    cin >>x;
    if(head==nullptr || head->next==nullptr) return false;
    p=head->next;      

    while(p!=nullptr)
    {
        if(p->next->data==x) 
        {
            Link q = p->next;
            p->next = p->next->next;
            delete q;
            return true;
        }
        else p=p->next;
    }
    //没有找到
    return false;
}
//释放链表
void clearLink(Link head)
{
    Link q;

    while(head!=nullptr)
    {
        q=head;
        head=head->next;
        free(q);
    }
}

//返回长度
int length(Link head)
{
    int count = 0;
    Link p = head->next;
    while(p != nullptr)
    {
        count++;
        p = p->next;
    }

    return count;
}
int main ()
{
    Link head = newList();
    pushFrontNode(head);
    pushBackNode(head);
    displayNode(head);
    queryNode(head);
    insertNode(head);
    deleteNode(head);
    clearLink(head);
    length(head);
    return 0;
}