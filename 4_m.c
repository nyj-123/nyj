//2832252249@qq.com
//202510302119
//牛运杰
#include <stdio.h>

void incrementArray(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        *(arr + i) += 1;  // 每个元素自增1
    }
}

int main() {
    int arr[5];
    
    // 输入数组
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 调用函数自增
    incrementArray(arr, 5);
    
    // 输出结果
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
