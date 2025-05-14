/**
 * file: 二分查找算法（记住）
 * bug? 找重复的数字只会出现1个
 */
#include <stdio.h>
#define LEN 10
int main(){
    int dict[LEN] = {1,1,2,3,5,8,13,21,34,55};
    int key;
    scanf("%d", &key);
    int low = 0, high = LEN - 1;
    int index = -1;
    //[1, 1, 2, 3, 5] low = 0 high = 4
    while (low < high)
    {
        int mid = (low + high) / 2;
        if(key > dict[mid])
            low = mid + 1;
        else if(key < dict[mid])
            high = mid - 1;
        else{
            index = mid;
            break;
        }
    }
    if(index == -1)
        printf("NOT FOUND!\n");
    else
        printf("INDEX: [%d]-%d\n", index, dict[index]);
    return 0;
}