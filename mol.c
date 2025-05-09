#include <stdio.h>
#include <math.h>

int main(){
    float Q =  6.0 / 32.0 * 6.02 * pow(10.0, 23.0);

    printf("%.3e\n", Q);
    printf("%.5g\n", Q);
    return 0;
}