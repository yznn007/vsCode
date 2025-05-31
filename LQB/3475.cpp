#include<bits/stdc++.h>
using namespace std;

bool check(int x,int k)
{
    return (x & ~k) == 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int n,k;
    while(t--)
    {
        cin >> n >> k;
        int x;
        int ans = 0;
        while(n--)
        {
            cin >> x;
            if(check(x,k)) ans |= x;
        }
        if(ans == k) cout << "Yes" <<endl;
        else cout << "No" <<endl; 
    }
    return 0;
}