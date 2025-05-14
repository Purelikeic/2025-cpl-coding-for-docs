#include <stdio.h>
#include <stdbool.h>

int main(){
    int max;
    scanf("%d", &max);
    

    for(int i = 2; i < max; i++){
        //judge whether is a prime number
        int num = i;
        bool is_prime = true;
        for(int j = 2; j < num; j++){//[2,i-1]
            if(num % j == 0){
                is_prime = false;
                break;
            } 
        }
        if(is_prime)//true or false
        printf("%d ", num); 
    }
    return 0;
}