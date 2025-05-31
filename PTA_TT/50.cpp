#include<bits/stdc++.h>
using namespace std;
int l,n,Max,Index;
string s;
string trans26(int num, int L) 
{
    string result;
    for (int i = 0; i < L; ++i) 
    {
        result = char('a' + num % 26) + result;
        num /= 26;
    }
    return result;
}
signed main()
{
    cin >> l >> n;
    Max = pow(26,l);
    Index = Max - n;
    s = trans26(Index,l);
    cout << s <<endl;
    return 0;
}