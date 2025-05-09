#include <stdio.h>

int main(){
    /**
     * 2 quarts of oil
     * -12.8degraea Celsius
     * lots of luck
     * 10.0LBS of
     * dirt
     * 100ergs of energy
     */
    double quantity = 0;
    char unit[21] = "";
    char item[21] = "";
    int m;
    while(m = scanf("%lf%20s of %20s", &quantity, unit, item) != EOF){
        printf("m = %d quantity = %f \t units = %s \t item = %s \n",
        m, quantity, unit, item);
        scanf("%*[^\n]");   //  作用是清空当前缓冲区，比如第二轮输入-12.8degraea Celsius，没有of，Celsius就会存在缓冲区，接下来这条语句scanf就会匹配上缓冲区中的Celsius并丢弃
                            //  假如没有这条语句，接下来输入就会是：celsius lots of luck
    }

    return 0;
}