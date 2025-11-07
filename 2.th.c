//2832252249@qq.com
//202510302119
//牛运杰
int main() {
    int matrix[3][3];
    int transpose[3][3];
    
    // 输入矩阵
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // 计算转置
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    // 输出转置矩阵
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d", transpose[i][j]);
            if(j < 2) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
