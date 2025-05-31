#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    int N;
    cin >> n >> m >> N;
    int A = n;
    int B = m;
    while(A >= 0 && B >= 0 && N--)
    {
        int a,b,c,d;
        cin >> a >>  b >>  c >>  d;
        int sum = a + c;
        if(b == sum && d == sum) continue;
        if(b == sum) A--;
        if(d == sum) B--;
        if(A < 0 && B >= 0) cout << "A" << "\n" << m-B <<endl;
        else  if(A >= 0 && B < 0)cout << "B" << "\n" << n-A <<endl;
    }
    return 0;
}