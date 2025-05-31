#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> vec(n + 1, 0); // 数组大小为 n+1，下标从 1 开始
    vector<int> chafen(n + 2, 0); // 差分数组大小为 n+2，下标从 1 开始

    // 初始化数组和差分数组
    for (int i = 1; i <= n; i++)
    {
        cin >> vec[i];
        chafen[i] = vec[i] - vec[i - 1];
    }

    // 处理 m 次操作
    while (m--)
    {
        int l, r, d;
        cin >> l >> r >> d;
        chafen[l] += d;
        chafen[r + 1] -= d;
    }

    // 根据差分数组计算最终结果
    for (int i = 1; i <= n; i++)
    {
        vec[i] = vec[i - 1] + chafen[i];
    }

    // 输出结果
    for (int i = 1; i <= n; i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}