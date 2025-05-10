/**
 * 如何判断输入是否为闰年？
 *      4的倍数，且不是100的倍数，为闰年
 *      400的倍数，为闰年
 */
#include <stdio.h>

int main(){
    int year;
    scanf("%d", &year);
    /*
    if((year % 4 == 0 && year % 100 != 0)   //逻辑短路：假如if中左边为假，机器就不会去算右侧的值
    ||(year % 400 == 0)){
        printf("%d is a leap year!\n", year);
    }
    else{
        printf("%d is not a leap year!\n", year);
    }
    */
    if(year % 4 != 0){
        printf("The year %d is not a leap year.\n", year);
   }
    else if(year % 100 != 0){
        printf("The year %d is a leap year.\n", year);
   }
    else if(year % 400 != 0){
        printf("The year %d is not a leap year.\n", year);
   }
    else
        printf("The year %d is  a leap year.\n", year);
    
    return 0;
}