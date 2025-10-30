//202510302119
//2832252249@qq.com
//牛运杰
#include <stdio.h>

int main()
{  
    
    int arr[5] = {0};
    int count = 0;
    int num;
    
    
    while (count < 5) {
        scanf("%d", &num);
        
       
        if (num % 2 == 0) {
            arr[count] = num;
            count++;
        }
    }
    
    
    for (int i = 0; i < 5; i++) {
        printf(" %d", arr[i]);
        
    }
    
    

}
