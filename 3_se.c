//202510302119
//2832252249@qq.com
//牛运杰
#include <stdio.h>

int main() 
{
    int n = 0;
    printf("请输入一个50以内的正整数:");
    scanf("%d", &n);
    
    // 检查输入范围
    if (n <= 1 || n > 50) {
        printf("密钥不安全，请重新输入");
        return 0;
    }
    
    // 特殊处理2（2是质数）
    if (n == 2) {
        printf("密钥安全，密码设置成功");
        return 0;
    }
    
    // 使用while循环检查是否为质数
    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            printf("密钥不安全，请重新输入");
            return 0;
        }
        i++;
    }
    
    // 如果循环完成都没有返回，说明是质数
    printf("密钥安全，密码设置成功");
    return 0;
}

