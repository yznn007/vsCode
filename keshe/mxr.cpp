#include <bits/stdc++.h>
using namespace std;

int N, A, B, L, C, D, M;

bool judge(int start, int len, const vector<int>& arr, int min_cnt, int max_cnt) {
    int cnt_0 = 0;
    for (int i = 0; i < len; i++) {
        if (arr[start + i] == 0) cnt_0++;
    }
    return (cnt_0 >= min_cnt && cnt_0 <= max_cnt);
}

void dfs(int x, vector<int>& arr) {
    if (x >= N) {
        for (int num : arr) {
            cout << num;
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < 2; i++) {
        arr[x] = i;
        bool valid = true;

        // 检查L约束
        if (x + 1 >= L) {
            if (!judge(x - L + 1, L, arr, A, B)) {
                valid = false;
            }
        }
        // 检查M约束
        if (x + 1 >= M) {
            if (!judge(x - M + 1, M, arr, C, D)) {
                valid = false;
            }
        }

        if (valid) {
            dfs(x + 1, arr);
        }
    }
    arr[x] = 0; // 回溯
}

int main() {
    cin >> N >> A >> B >> L >> C >> D >> M;
    vector<int> arr(N, 0);
    dfs(0, arr);
    return 0;
}