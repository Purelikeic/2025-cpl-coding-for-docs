/**
 * Now, given a set A of integers, to compute their minumum.
 */
#include <stdio.h>
#define M 5

int main(){
    int a[M];
    int res = 0;

    for(int i = 0; i < M; i++){
        scanf("%d", &a[i]);
    }   
    int min = a[0];
    for(int i = 1; i < M; i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    printf("min: %d\n", min);
    return 0;
}