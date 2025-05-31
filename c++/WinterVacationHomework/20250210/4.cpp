//第4题
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> lists;
    for(int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        lists.push_back(temp);
    }
    string bookname;
    cin >> bookname;
    for(int i = 0; i < n; i++)
        if(lists[i] == bookname)
        {
            cout << "查找成功" << endl;
            return 0;
        }
    cout << "查找失败" << endl;
    return 0;
}