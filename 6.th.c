//2832252249@qq.com
//202510302119
//牛运杰
#include <stdio.h>

// 求数组元素和
int array_sum(int arr[], int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

// 求数组元素积
int array_product(int arr[], int length) {
    int product = 1;
    for(int i = 0; i < length; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[5];
    
    // 输入数组
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sum = array_sum(arr, 5);
    int product = array_product(arr, 5);
    
    printf("%d %d", sum, product);
    return 0;
}
