#include <bits/stdc++.h>
using namespace std;
void c(int *b)
{
    *b = 2;
}
int main()
{
    // map<string, string> mp;  // 修改为 std::map<std::string, std::string>
    // mp.insert(pair<string,string>("hh", "66"));  // 使用 make_pair 插入键值对
    // mp.insert(pair<string,string>("123", "456"));  // 插入另一个键值对
    // mp.insert({"hahaha","wawawa"});

    // cout << mp["hh"] << endl;  // 输出 "66"
    // cout << mp["123"] << endl;  // 输出 "456"
    // cout << mp["hahaha"] << endl;
    int a = 1;
    int *b = &a;
    c(b);
    cout << *b << endl;
    return 0;
}