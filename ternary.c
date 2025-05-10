#include <stdio.h>

int main(){

    int a = 4;
    int b = 2;

    int x = a > b ? a : b + 1;

    int y = (a > 0 ? a : 0) + b;

    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}