/**
 * 任务：输入正整数n，计算n!
 */
#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int res = 1;
    for(int i = n; i > 0; i--){
        res = res * i;
    }

    printf("res: %d\n", res);
    
    return 0;
}