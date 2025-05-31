#include <bits/stdc++.h>
using namespace std;

// 链表节点定义
struct Node {
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};

// 头插法创建链表
Node* insertNode(Node* tail, int x) {
    tail->next = new Node(x);
    return tail->next;
}

// 分割链表
Node* partitionList(Node* head, int x) {
    Node *smallHead = new Node(0), *smallTail = smallHead;  // 存储 < x
    Node *largeHead = new Node(0), *largeTail = largeHead;  // 存储 >= x

    Node* p = head;
    while (p) {
        if (p->data < x) {
            smallTail = insertNode(smallTail, p->data);
        } else {
            largeTail = insertNode(largeTail, p->data);
        }
        p = p->next;
    }

    // 连接两部分
    smallTail->next = largeHead->next;
    return smallHead->next;
}

// 打印链表
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, x;
    cin >> n;

    int val;
    cin >> val;
    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < n; i++) {
        cin >> val;
        tail = insertNode(tail, val);
    }

    cin >> x;
    Node* newHead = partitionList(head, x);
    printList(newHead);

    return 0;
}
