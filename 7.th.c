//2832252249@qq.com
//202510302119
//牛运杰
#include <stdio.h>

// 反转数组
void reverse_array(int arr[], int length) {
    for(int i = 0; i < length / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

int main() {
    int arr[5];
    
    // 输入数组
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 反转数组
    reverse_array(arr, 5);
    
    // 输出反转后的数组
    for(int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if(i < 4) printf(" ");
    }
    
    return 0;
}
