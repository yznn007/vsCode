#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    int max = 0;
    int start = 0;
    int end = 0;
    for(long long i = 2; i*i <= n; i++)
    {
        long long product = 1;
        for(long long j = i; j < n; j++)
        {
            product *= j;
            if(product > n) break;
            if(n % product == 0)
            {
                if(j-i+1 > max) 
                {
                    max = j-i+1;
                    start = i;
                    end = j;
                }
            }
        }
    }
    if(max == 0) //质数
    {
        cout << 1 << endl;
        cout << n << endl;
    }
    else
    {
        cout << max <<endl;
        cout << start;
        start++;
        for(long long i = start; i<= end; i++)
        {
            cout << "*";
            cout << i;
        }
    }                 
    return 0;
}