#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    // vector<int> vec(N);
    // for(auto& it : vec) cin >> it;
    int odd = 0;
    int even = 0;

    while(N--)
    {
        int num;
        cin >> num;
        if(num%2 == 0) odd++;
        else even++;
    }
    cout << even << " " << odd <<endl;
    return 0;
}