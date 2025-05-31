#include<bits/stdc++.h>
using namespace std;
bool isInt(string s)
{
    for(int i  = 0;i < s.size();i++)
    {
        if(s[i] < '0' && s[i] > '9') return 0;
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s1;
    string s2;
    cin >> s1;
    cin.ignore(1);
    getline(cin,s2);
    if(isInt(s1) == true) cout << s1;
    else cout << "?";
    cout  << " " << "+" << " ";
    if(isInt(s2) == true) cout << s2;
    else cout << "?";
    cout << " " << "+" << " ";
    if(isInt(s1) == true && isInt(s2) == true) cout << stoi(s1) + stoi(s2) <<endl;
    return 0;
}