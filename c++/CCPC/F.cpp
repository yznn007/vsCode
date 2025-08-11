#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

bool judge(string s)
{
    if(s.size() != 5) return 0;
    if(s[2] != s[4]) return 0;
    set<char> sett;
    for(int i = 0 ;i < 4;i++)
        sett.insert(s[i]);
    if(sett.size() != 4) return 0;
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(judge(s)) cnt++;
    }
    cout << cnt <<endl;
}