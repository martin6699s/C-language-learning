//
//  main.c
//  插入排序
//
//  Copyright © 2017年 martin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
    
    for(int i = 0,j = ar_size; i < j;i++){

        // 需要插入的位置
        int offset  = i;
        for(int z = 0;z < i;z++){
            if(ar[i] < ar[z]) {
                offset = z;
                break;
            }
        }
        
        if(offset == i) {
            // 如果是本身就跳过继续
            continue;
        }
        
        int temp = ar[i];
        
        // 位移数位为(i-offet)
        int loop = i - offset;
        int y = i;
        while (loop) {
            // 开始向右平移一位
            ar[y] = ar[y-1];
            --y;
            --loop;
            for(int _ar_i = 0; _ar_i < ar_size ; _ar_i++) {
                printf("%d ", ar[_ar_i]);
            }
            
            printf("\n");
        }

        ar[offset] = temp;
        
        for(int _ar_i = 0; _ar_i < ar_size ; _ar_i++) {
            printf("%d ", ar[_ar_i]);
        }
        
        printf("\n");
    }
}
int main(void) {
    int _ar_size;
    printf("input:");
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        scanf("%d", &_ar[_ar_i]);
    }
    
   insertionSort(_ar_size, _ar);

    return 0;
}


