//202510302119
//2832252249@qq.com
//牛运杰
#include <stdio.h>

int main()
{
    float a, b = 0;
    float c = 0;
    char ch;

    printf("请按顺序输入两个整数和运算符(用逗号隔开，别用空格):");
    scanf("%f,%f,%c", &a, &b, &ch);

    switch (ch)
    {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            if (b != 0)
                c = a / b;
            else
                printf("错误：除数不能为0\n");
            break;
        default :
                printf("不支持该字符的运算\n");
            break;
    }

    printf("结果：%.1f\n", c);

    return 0;
}
