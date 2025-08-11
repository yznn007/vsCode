#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    vector<long long> vec(n);
    for(long long i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<long long> index(n+1,0);
    for(long long i = 1; i <= n; i++)
    {
        index[i] = index[i-1] + vec[i-1];
    }

    long long m;
    cin >> m;
    while(m--)
    {
        long long l,r;
        cin >> l >> r;
        long long result = index[r] - index[l-1];
        cout << result << "\n";
    }

    return 0;
}