#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<string> pinyin(s.size());
    for(int i = 0; i < s.size();i++)
    {
        if(s[i] == '-') pinyin[i] = "fu";
        else if(s[i] == '0') pinyin[i] = "ling";
        else if(s[i] == '1') pinyin[i] = "yi";
        else if(s[i] == '2') pinyin[i] = "er";
        else if(s[i] == '3') pinyin[i] = "san";
        else if(s[i] == '4') pinyin[i] = "si";
        else if(s[i] == '5') pinyin[i] = "wu";
        else if(s[i] == '6') pinyin[i] = "liu";
        else if(s[i] == '7') pinyin[i] = "qi";
        else if(s[i] == '8') pinyin[i] = "ba";
        else if(s[i] == '9') pinyin[i] = "jiu";
    }
    for(int i = 0; i < s.size(); i++)
    {   
        if(i) cout << ' ';
        cout << pinyin[i];
    }
    return 0;
}