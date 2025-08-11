#include<bits/stdc++.h>
using namespace std;
bool check(int num)
{
    int cnt = 1;
    while(num)
    {
        int i = num % 10;
        if(cnt % 2 == 1)
        {
            if(i % 2 == 0) return 0;
        }
        else
        {
            if(i % 2 == 1) return 0;
        }
        num/=10;
        cnt++;
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int ans = 0;
    while(N--)
    {
        if(check(N+1)) ans++;
    }
    cout << ans <<endl;

    return 0;
}