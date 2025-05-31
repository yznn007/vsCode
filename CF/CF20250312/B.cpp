#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int num;
        for(int i = 0; i < n; i++)
        {
            cin >> num;
            sum += num;
        }
        cout << sum-n+1 << endl;
    }
    return 0;
}