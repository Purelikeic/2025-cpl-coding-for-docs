#include <stdio.h>

int main(){
    int i;
    double x;
    char name[50];

// input: 56789 0123 56a72
    int m = scanf("%2d %lf %*d %[0123456789]", &i, &x, name);   // 首先，可以发现scanf返回值是int，其次%2d表示只识别2个数字，因此i只能识别到56789的前两个数字
                                                                // 其次，x从i识别完之后接着识别，识别到789之后有空格，不应该是浮点数，因此把789识别成789.000000
                                                                // 然后，%*d的意思是识别整数，把识别到的忽略，因此会识别0123直到空格，忽略0123
                                                                // 最后，匹配0~9之间的数字，匹配完56之后发现是a不在扫描列表中，所以停下来，56放给name，停止在a之前
    int n = printf("i = %d\nx = %f\nname = %s", i, x, name);
    char c;
    scanf("%c", &c);

    printf("\n%d %d %c", m, n, c);                                    // m表示scanf成功匹配数量，可以发现i x name全部匹配成功因此是3，n同理。
    
    int x1;
    scanf("%d", &x1);
    printf("%d", x1);

    /**
     * 我多添加了几行，首先是一个字符c，因为name匹配到56，缓冲区剩下a72，就会把字符a给c，缓冲区剩下72
     * 缓冲区会把多出来的72给x1
     * 我们当然也可以通过scanf("%*[^\n]")来清楚buffer里面的内容
     */
    return 0;
}