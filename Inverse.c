#include <stdio.h>

int main(){

    int num;
    int count = 0;
    int reverse = 0;

    scanf("%d", &num);
    
    do
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
        count++;
    } while (num > 0);
    
    printf("count: %d. reverse: %d\n", count, reverse);
    return 0;
}