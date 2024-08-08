#include <string.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_STR_LEN 100

static char *stringCat(char prefix[], ...) {
    va_list valist;
    va_start(valist, prefix);

    // clear string
    static char string[MAX_STR_LEN];
    if (string[0] != '\0') {
        memset(string, 0, sizeof(string));
    }

    strcat(string, prefix);
    while (true) {
        const char *temp = va_arg(valist, char *);
        // 此判断方式不可取，当可变参数个数超过3个，假设为n个，那在获取第n+1个参数时，得到的temp不会是NULL；
        // 且第二次调用stringCat函数时，不管可变参数个数是多少，假设为m个，在获取第m+1个参数时，得到的temp都不会为NULL；
        // 总结：不能用这种方式来判断可变参数列表已经遍历完成。
        if (temp == NULL) {
            break;
        }
        strcat(string, temp);
        strcat(string, ", ");
    }

    va_end(valist);

    // remove last ", "
    string[strlen(string) - 1] = '\0';
    string[strlen(string) - 1] = '\0';

    return string;
}

int main() {
    printf("%s\n", stringCat("String List: ", "String1", "String2", "String3"));
    printf("%s\n", stringCat("String List2: ", "String4", "String5", "String6", "String7"));
}
