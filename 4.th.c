//2832252249@qq.com
//202510302119
//牛运杰
#include <stdio.h>

// 计算a的b次幂
int power(int a, int b) {
    int result = 1;
    for(int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int sum = 0;
    
    // 计算1² + 2² + 3² + 4² + 5²
    for(int i = 1; i <= 5; i++) {
        sum += power(i, 2);
    }
    
    printf("%d", sum);
    return 0;
}
