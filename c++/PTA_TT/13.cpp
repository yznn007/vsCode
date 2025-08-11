#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int S = 1;
    int sum = 1;
    for(int i = 2;i <= n;i++)
    {
        sum *= i;
        S += sum;
    }
    cout << S;
    return 0;
}