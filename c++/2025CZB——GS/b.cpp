#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll Sum = 0;
ll sum = 0;
ll Max = 0;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin >> x;
        ll y = 1;
        int flag = 0;
        while(++y && y < 2e31)
        {
            ll a = x | y;
            ll b = x ^ y;
            ll c = __gcd(x,y);
            if((a + b > c && a + c > b && b + c > a) && a!=0 && b!= 0 && c!= 0)
            {    
                flag = 1;
                cout << y << endl;
                break;
            }
        }
        if(!flag) cout << "-1" << endl;
    }
    return 0;
}