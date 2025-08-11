#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int d;
    cin >> d;
    d = (d+2)%7;
    if(d == 0) d=7;
    cout << d;
    return 0;
}