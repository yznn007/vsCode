#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    vector<int> S(n+1,0);
    for(int i = 1; i <= n; i++)
    {
        S[i] = S[i-1] + num[i-1];
    }
    return 0;
}