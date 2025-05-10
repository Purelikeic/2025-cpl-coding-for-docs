#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a < b && a < c){
        printf("min is a: %d\n", a);
    }
    else if(b < a && b < c){
        printf("min is b: %d\n", b);
    }
    else{
        printf("min is c: %d\n", c);
    }

    return 0;
}