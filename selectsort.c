//file： 选择排序
#include <stdio.h>
#define MAX 20

int main() {
    int num[MAX] = {0};
    int len = -1;
    
    // 读入数组
    while (scanf("%d", &num[++len]) != EOF);
    
    printf("Original array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    
    // 选择排序
    for (int i = 0; i < len; i++) {
        // 找到[i, len-1]区间内的最小值位置
        int smallest_loc = i;
        int smallest_value = num[i];
        for (int j = i; j < len; j++) {
            if (num[j] < smallest_value) {
                smallest_loc = j;
                smallest_value = num[j];
            }
        }
        // 交换num[i]和num[smallest_loc]
        int temp = num[i];
        num[i] = num[smallest_loc];
        num[smallest_loc] = temp;
    }
    
    // 输出排序后的数组
    printf("Sorted array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    
    return 0;
}