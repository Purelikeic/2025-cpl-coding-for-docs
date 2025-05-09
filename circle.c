/*
    Printf
    %[flags][minimalwidth][.precision]specifier
    转换说明可以控制以特定输出格式输出
    %m.px, %-m.px(-号强制左对齐)
    m：最小栏宽，指定最少需要显示的字符数量，以空格补全
    p：根据转换说明specifier类型控制精度
    %d：最少显示的数字个数，必要时补零
    %e：科学计数法显示，指明小数点后应该出现的数字个数
    %f：指明小数点后应该出现的数字个数
    %g：所有可以显示的有效字符的最大数量
*/



#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define PI 3.14

int main(){
    //const float PI = 3.14;
    float radius = 0.0f;
    scanf("%f", &radius);

    float circu = 2 * PI* radius;
    float area = PI * radius * radius;

    float surface = 4 * PI * radius *radius;

    float volume = 4.0 / 3.0 * PI * pow(radius, 3); // 4 / 3 = 1

    printf("%-15.4f: circu\n", circu);
    printf("%-15.4f: area\n", area);
    printf("%-15.4f: surface\n", surface);
    printf("%-15.4f: volume\n", volume);

    /*
    int i = 40;
    float x = 839.21f;
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
    */
    return 0;
}