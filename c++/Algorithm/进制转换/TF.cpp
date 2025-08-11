#include<bits/stdc++.h>
using namespace std;

int calc(char c)
{
    if(c >= 'A') return c - 'A' + 10;
    return c - '0';
}

int change_k_to_10(int k,string s)
{
    int ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        ans = ans * k + calc(s[i]);
    }
    return ans;
}

string change_10_to_k(int x,int k)
{
    string ans = "";
    while(x)
    {
        int t = x % k;
        if(t <= 9)
            ans = ans + (char)('0' + t);
        else    
            ans = ans + (char)('A' + t -10);
        x /= k;

    }
}
int main()
{

    return 0;
}