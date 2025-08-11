#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string dang{"Dang"};
    int count = (s[0]-'0')*10 + (s[1]-'0') -12;
    if(count <= 0) cout << "Only " << s << ".  Too early to Dang." <<endl;
    else
    {    
        count += ((s[3] == '0' && s[4] == '0')? 0 : 1);
        while(count--) cout << dang;
    }    
    return 0;
}