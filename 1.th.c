//2832252249@qq.com
//202510302119
//牛运杰
#include <stdio.h>

int main() {
    int matrix[3][3];
    
    // 输入矩阵
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // 输出矩阵
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d", matrix[i][j]);
            if(j < 2) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
