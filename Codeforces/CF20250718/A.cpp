#include<bits/stdc++.h>
using namespace std;
signed main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    int x;
    while(t--)
    {
        cin >> x;
        int num = x;
        int Min = 10;
        while(num != 0)
        {
            int t = num % 10;
            Min = min(Min,t);
            num /= 10;
        }
        if(x == 0) cout << "0" << endl;
        else cout << Min << endl;
    }
    return 0;
}