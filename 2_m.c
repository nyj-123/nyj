//2832252249@qq.com
//202510302119
//牛运杰
#include <stdio.h>

int main() {
    int arr[5];
    int *p = arr;
    
    // 输入数组元素
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }
    
    // 通过指针将元素乘以2
    for (int i = 0; i < 5; i++) {
        *(p + i) = *(p + i) * 2;
    }
    
    // 输出结果
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    
    return 0;
}
