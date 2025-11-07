//2832252249@qq.com
//202510302119
//牛运杰
#include <stdio.h>

// 计算等差数列和
int arithmetic_sum(int a1, int an, int step) {
    int n = (an - a1) / step + 1;  // 项数
    return n * (a1 + an) / 2;      // 等差数列求和公式
}

int main() {
    int result = arithmetic_sum(1, 100, 1);
    printf("%d", result);
    return 0;
}
