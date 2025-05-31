#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    // 计算排列方案数
    long long result = 1;
    for (int i = 1; i <= 2025; i++) {
        result = (result * i) % MOD;
    }
    // 输出结果
    cout << result << endl;

    return 0;
}