//202510302119
//2832252249@qq.com
//牛运杰
#include <stdio.h>


int main() {
    int a,b,c = 0;
    printf("请输入三个整数(用空格隔开，判断是否能组成三角形):");
    scanf("%d %d %d",&a,&b,&c);
    if(a + b > c && b + c > a && a + c > b)
    {
    printf("可以组成三角形\n");

    }
    else
    {
    printf("不能组成三角形\n");

    }
    return 0;
}
