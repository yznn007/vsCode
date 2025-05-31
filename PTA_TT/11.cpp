#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    unordered_set<char> charSet;
    for (char c : b) {
        charSet.insert(c);
    }

    // 遍历字符串 A，保留不在集合中的字符
    string result;
    for (char c : a) {
        if (charSet.find(c) == charSet.end()) {
            result += c;
        }
    }
    cout << result << endl;
    return 0;
}