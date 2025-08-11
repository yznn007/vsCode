#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 2e5+10
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> a(n+1,0);
    vector<ll> b(m+1,0);
    ll pre;
    for(int i = 1; i <= n; i++)
    {   
        cin >> a[i];
        a[i] += a[i-1];
    }
    for(int i = 1; i <= m; i++)
    {    
        cin >> b[i];
        b[i] += b[i-1];
    }
    ll t,ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] > k) break;
        t = k - a[i];
        auto x = upper_bound(b.begin()+1,b.end(),t);
        x--;
        ans = max(ans,i + (ll)(x-b.begin())); 
    }
    cout << ans;
    return 0;
}