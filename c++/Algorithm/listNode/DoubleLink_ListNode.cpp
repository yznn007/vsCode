#include <bits/stdc++.h>
using namespace std;

// 定义双向链表节点
struct Node 
{
    int data;
    Node *prev, *next;
};

// 创建新链表
Node* newList() 
{
    Node* head = new Node;
    head->next = nullptr;
    head->prev = nullptr;
    return head;
}

// 头插法
Node* pushFrontNode(Node* head, int x) 
{
    Node* node = new Node;
    node->data = x;
    node->next = head->next;
    node->prev = head;
    if (head->next != nullptr) 
    {
        head->next->prev = node;
    }
    head->next = node;
    return head;
}

// 尾插法
Node* pushBackNode(Node* head, int x) 
{
    Node* rear = head;
    while (rear->next != nullptr) rear = rear->next;
    Node* node = new Node;
    node->data = x;
    node->next = nullptr;
    node->prev = rear;
    rear->next = node;
    
    return head;
}

// 遍历链表
void displayNode(Node* head) 
{
    Node* p = head->next;
    while (p != nullptr) 
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

// 查找节点
bool queryNode(Node* head, int x) 
{
    Node* p = head->next;
    while (p != nullptr)
    {
        if (p->data == x) 
        {
            cout << p->data << " ";
            return true;
        }
        p = p->next;
    }
    return false;
}

// 插入节点
bool insertNode(Node* head, int index, int x) 
{
    int count = 0;
    Node* p = head;
    while (p != nullptr && count < index) 
    {
        p = p->next;
        count++;
    }
    if (p == nullptr) return false;
    
    Node* node = new Node;
    node->data = x;
    node->next = p->next;
    node->prev = p;
    
    if (p->next != nullptr) p->next->prev = node;
    
    p->next = node;
    
    return true;
}

// 删除节点
bool deleteNode(Node* head, int x) 
{
    Node* p = head->next;
    while (p != nullptr) 
    {
        if (p->data == x)
        {
            if (p->prev != nullptr) 
            {
                p->prev->next = p->next;
            }
            if (p->next != nullptr) 
            {
                p->next->prev = p->prev;
            }
            delete p;
            return true;
        }
        p = p->next;
    }
    return false;
}

// 释放链表
void clearLink(Node* head) 
{
    Node* q;
    while (head != nullptr) 
    {
        q = head;
        head = head->next;
        delete q;
    }
}

// 计算链表长度
int length(Node* head) 
{
    int count = 0;
    Node* p = head->next;
    while (p != nullptr) 
    {
        count++;
        p = p->next;
    }
    return count;
}

int main() 
{
    return 0;
}
