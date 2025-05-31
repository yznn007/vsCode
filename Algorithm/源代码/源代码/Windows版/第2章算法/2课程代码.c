#include <stdio.h>

int main() {
    // 第一部分：计算1到100的和
    int i, sum = 0, n = 100;
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("%d\n", sum);

    // 第二部分：使用公式计算1到100的和
    sum = (1 + n) * n / 2;
    printf("%d\n", sum);

    // 第三部分：嵌套循环计算
    int j, x = 0;
    sum = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            x++;
            sum = sum + x;
        }
    }
    printf("%d\n", sum);

    // 第四部分：重复计算1到100的和
    sum = (1 + n) * n / 2;
    printf("%d\n", sum);

    // 第五部分：重复计算1到100的和（多次）
    for (int k = 0; k < 10; k++) {
        sum = (1 + n) * n / 2;
    }
    printf("%d\n", sum);

    // 第六部分：单层循环
    for (i = 0; i < n; i++) {
        // O(1)的操作
    }

    // 第七部分：while循环
    int count = 1;
    while (count < n) {
        count = count * 2;
        // O(1)的操作
    }

    // 第八部分：双层循环
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // O(1)的操作
        }
    }

    // 第九部分：双层循环，内层循环从i开始
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            // O(1)的操作
        }
    }

    // 第十部分：调用函数
    for (i = 0; i < n; i++) {
        function(i);
    }

    return 0;
}

void function(int count) {
    printf("%d\n", count);
}