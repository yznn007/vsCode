#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;
void Vector()
{
    vector<int> arr;
    // 首位元素
    arr.begin();
    // 末尾元素
    arr.end();
    // 尾插一个元素（参数是元素）
    arr.push_back(1);

    // 删除末尾元素
    arr.pop_back();

    // 返回arr的长度 
    cout << arr.size() << endl;

    // 清空arr
    arr.clear();

    // 返回arr是否为空(true(1) or false(0))
    cout << arr.empty() << endl;

    // 改变长度（第一个参数是长度，第二个参数是初始值）
    arr.resize(5,1);
}
void Stack()
{
    stack<int> stk;
    // 添加元素（参数是元素）
    stk.push(1);
    // 删除栈顶元素
    stk.pop();                                                                                                                  
    cout << stk.empty() << endl;
    // 取栈顶元素
    stk.top();
    cout << stk.top() << endl;
    // 返回栈的长度
    cout << stk.size() << endl;
    // 返回栈是否为空(true(1) or false(0))
    stk.empty();
}
void Queue()
{
    queue<int> que;
    // 添加元素（参数是元素）
    que.push(1);
    // 删除队首元素
    que.pop();
    cout << que.empty() << endl;
    // 取队首元素
    que.front();
    cout << que.front() << endl;
    // 取队尾元素
    que.back();
    cout << que.back() << endl;
    // 返回队的长度
    cout << que.size() << endl;
    // 返回队是否为空(true(1) or false(0))
    que.empty();
}
void Prior_queue()
{
    // 默认降序排序
    priority_queue<int> pque;
    // 优先队列中添加元素，元素按升序排列
    priority_queue<int, vector<int>, less<int>> pque_less;
    // 优先队列中添加元素，元素按降序排列
    priority_queue<int, vector<int>, greater<int>> pque_great;
    // 添加元素（参数是元素）
    pque.push(1);
    // 删除优先队列中首元素
    pque.pop();
    cout << pque.empty() << endl;
    // 取优先队列中最小元素
    pque.top();
    cout << pque.top() << endl;
    // 返回优先队列中元素的个数
    cout << pque.size() << endl;
    // 返回优先队列是否为空(true(1) or false(0))
    pque.empty();
}
void Set()
{
    set<int> st;
    // 向集合中添加元素（参数是元素）
    st.insert(1);
    // 删除集合中元素（参数是元素）
    st.erase(1);
    cout << st.empty() << endl;
    // 取集合中元素的个数
    cout << st.size() << endl;
    // 返回集合是否为空(true(1) or false(0))
    st.empty();
}
void Map()
{
    map<string,string> mp;
    
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr[n];
    for(int i = 0; i < n; i++) 
    {
        int temp;
        cin >> temp;
        arr[i].push_back(temp);
    }
    return 0;
}