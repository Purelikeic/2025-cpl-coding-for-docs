#include <stdio.h>
#include <string.h>

#define MAX 21

int main() {
    char str[MAX] = "";
    scanf("%20s", str);
    int len = strlen(str);
    int is_palindrome = 1;  // 初始假设是回文

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            is_palindrome = 0;  // 不是回文
            break;
        }
    }

    if (is_palindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}