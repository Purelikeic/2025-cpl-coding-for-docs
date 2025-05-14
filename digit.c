#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int count = 0;
    do
    {
        num /= 10;
        count++;
    } while (num > 0);
    
    printf("count: %d\n", count);
    return 0;
}