//202510302119
//2832252249@qq.com
//牛运杰
#include <stdio.h>

int main()
{   
    int a = 0;
    printf("输入学生的整数成绩：");
    scanf("%d", &a);

    if (a >= 0 && a <= 100)
    {
        if (a >= 90 && a <= 100)
        {
            printf("学生的等级为A");
        }
        else if (a >= 80 && a < 90)
        {
            printf("学生等级为B");
        }
        else if (a >= 70 && a < 80)
        {
            printf("学生等级为C");
        }
        else if (a >= 60 && a < 70)
        {
            printf("学生等级为D");
        }
        else
        {
            printf("学生等级为E");
        }
    }
    else
    {
        printf("您输入的成绩不在范围内，请重新输入");
    }

    return 0;
}
