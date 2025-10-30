//202510302119
//2832252249@qq.com
//牛运杰
#include <stdio.h>

int main() 
{   
    int n = 0;
    printf("请输入一个50以内的正整数:");
    scanf("%d", &n);
    
    if (n <= 1 || n > 50) {
        printf("输入无效，请输入1-50之间的正整数\n");
        return 0;
    }
    
    for (int i = 2; i < n; i++)
    {   
        if (n % i == 0)
        {
            printf("密码不安全，请重新输入\n");
            return 0;
        }
    }
    
    printf("密钥安全，密码设置成功\n");
    return 0;
}
