#include <stdio.h>
#include <string.h>

int main(){

    char firstname[20], lastname[20];   // 无法区分空格，碰到空格自动终止
    char gender;
    int year, month, day;
    char weekday[10];

    int c_oj, c_midexam, c_finalexam;
    int rank;

    //printf("%d %d\n", firstname, lastname);
    scanf("%s %s %c", firstname, lastname, &gender);    // 由于字符数组名称本身就代表字符数组所在的地址，因此这里输入不需要再取地址了
    scanf("%d %d %d %s", &year, &month, &day, weekday);
    scanf("%d %d %d", &c_oj, &c_midexam, &c_finalexam);
    scanf("%d", &rank);

    float score = (c_oj + c_midexam + c_finalexam) / 3.0;

    printf("%s %s\t%c\n", firstname, lastname, gender);
    printf("%.2d-%.2d-%.2d\t%s\n", day, month, year, weekday);
    printf("%d\t%d\t%d\n", c_oj, c_midexam, c_finalexam);
    printf("%.1f\t%d%%\n", score, rank);
   // printf("%d-%d-%d\n", &year, &month, &day);

    /*
    char name[] = "Xiaoming Wang";
    printf("%lu\n", sizeof(name));  //14
    printf("%lu\n", strlen(name));  //13
    */

    return 0;
}