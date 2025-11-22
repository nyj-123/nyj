//2832252249@qq.com
//202510302119
//牛运杰
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int *p = &a;  //p存储的是地址，*p是指地址内的数据
    *p = *p + 10;  // 通过指针修改a的值
    printf("%d,%d\n", a, *p);
    return 0;
}
