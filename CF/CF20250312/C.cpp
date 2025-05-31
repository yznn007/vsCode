#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int y = x&(x-1);
        if(y == 0) cout << -1 <<endl;
        else cout << y << endl;
    }
    return 0;
}