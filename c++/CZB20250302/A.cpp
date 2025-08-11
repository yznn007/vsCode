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
        int l,r;
        cin >> l >> r;
        if(r-l+1 < 3) 
        {
            if(l%3 == 0 || r%3 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;  
}