/**
 * for循环适合什么情况？
 * 答：循环次数已知（或很容易知道）
 * 有些事情需要循环来做，但是难以计数
 */

#include <stdio.h>

int main(){
    const int N = 9;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            printf("%d*%d=%-4d", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}