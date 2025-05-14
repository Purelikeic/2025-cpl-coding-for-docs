#include <stdio.h>
#include <stdbool.h>
#define MAX 20

int main(){
    int num[MAX] = {0};
    int len = -1;
    while(scanf("%d", &num[++len])!=EOF);

    for(int i = 0; i < len; i++){
        bool flag = false;
        for(int j = 0; j < len - 1 - i; j++){
            if(num[j] > num[j + 1]){
                flag = true;
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
        for(int j = 0; j < len; j++){
            printf("%d ", num[j]);
        }
        printf("\n");
        if(!flag)
            break;
    }

    return 0;
}