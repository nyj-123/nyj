//202510302119
//2832252249@qq.com
//牛运杰
#include <stdio.h>

int main()
{
    int i = 0,a,b,c;
    for ( i = 100; i <= 999; i++)
    {
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100;
        if(a*a*a + b*b*b + c*c*c == i )
        printf(" %d",i);
    }
    

    return 0;
}
