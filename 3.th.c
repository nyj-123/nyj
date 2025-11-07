//2832252249@qq.com
//202510302119
//牛运杰
#include <stdio.h>

int main() {
    int arr[10];
    
    // 输入10个数
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 冒泡排序
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // 输出排序结果
    for(int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
        if(i < 9) printf(" ");
    }
    
    return 0;
}
