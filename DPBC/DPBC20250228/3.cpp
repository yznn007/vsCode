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
        int n;
        cin >> n;
        long long asum = 0, bsum = 0, csum = 0;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            asum += a;
        }
        for (int i = 0; i < n; i++) {
            long long b;
            cin >> b;
            bsum += b;
        }
        for (int i = 0; i < n; i++) {
            long long c;
            cin >> c;
            csum += c;
        }    
        long long x;
        x = (csum-bsum)/asum;
        cout << x <<'\n';
    }
    return 0;
}