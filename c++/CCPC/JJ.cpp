#include <bits/stdc++.h>
using namespace std;

vector<int> num(6, 0); 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) 
    {
        int n;
        cin >> n; // 输入
        for (int i = 1; i <= 5; i++) 
        {
            num[i] = n % 10;
            n /= 10;
        } // 放入数组
        for (int i = 1; i <= 5; i++)
        {
            if(num[i] % 2 == 0)
            {
                swap(num[i],num[5]);
                num[0] = 1; //不是13579
            }
        }
        if(num[0] == 1)
            for (int i = 1; i <= 5; i++)
                cout << num[i];
        else cout << "97531";
        cout << endl;
        num[0] = 0;
    }
    return 0;
}