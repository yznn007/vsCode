#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin >> n;
    int num;
    vector<string> s1;
    vector<string> s2;
    string s;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        cin >> s;
        if(num % 2 == 0) s1.push_back(s);
        else s2.push_back(s);
    }
    for(int i = 0; i < n/2 ;i++)
    {
        cout << s1[i] << " " << s2[n/2-i-1] << endl;
    }
    return 0;
}