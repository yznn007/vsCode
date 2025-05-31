#include <iostream>
#include <vector>
using namespace std;

int solveGame(int n, int k, vector<int>& array) {
    vector<int> remainders(k, 0);

    // 计算每个余数类的计数
    for (int ai : array) {
        remainders[ai % k]++;
    }

    // 检查是否有唯一的余数类
    for (int i = 0; i < n; ++i) {
        if (remainders[array[i] % k] == 1) {
            return i + 1;
        }
    }

    // 检查是否有唯一的余数为0
    if (remainders[0] == 1) {
        for (int i = 0; i < n; ++i) {
            if (array[i] % k == 0) {
                return i + 1;
            }
        }
    }

    // 没有找到获胜策略
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> array(n);
        for (int& ai : array) {
            cin >> ai;
        }
        int result = solveGame(n, k, array);
        if (result != -1) {
            cout << "YES\n" << result << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}