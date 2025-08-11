#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
vector<ll> vec;
int check(ll mid)
{
    ll sum  = 0;
    int cnt = 1;
    for(int i = 1; i <= n; i++)
    {   
        if(vec[i] > mid) return 0;
        if(sum + vec[i] <= mid) sum += vec[i];
        else 
        {
            sum = vec[i];
            cnt++;
        }
    }
    return cnt <= m;
}

int main()
{
    cin >> n >> m;
    vec.resize(n+10,0);
    for(int i = 1; i <= n; i++)
        cin >> vec[i];
    ll l = 1,r = 1e13;
    ll mid;
    while(l<r)
    {
        mid = l + ((r - l) / 2);
        if(check(mid)) r = mid;
        else l = mid + 1;
    }
    cout << l;
    return 0;
}