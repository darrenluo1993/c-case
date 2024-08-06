#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 100

static const int STR_NUM = 3;
static const int PENULT_IDX = STR_NUM - 1;

static char *stringCat(char prefix[], ...) {
    va_list valist;
    va_start(valist, prefix);

    // 清空字符串内容
    static char string[MAX_STR_LEN];
    if (string[0] != '\0') {
        memset(string, 0, sizeof(string));
    }

    strcat(string, prefix);
    for (int i = 0; i < STR_NUM; i++) {
        strcat(string, va_arg(valist, char*));
        if (i < PENULT_IDX) {
            strcat(string, ", ");
        }
    }

    va_end(valist);

    // 去除最后一个逗号和空格
    // string[strlen(string) - 1] = '\0';
    // string[strlen(string) - 1] = '\0';

    return string;
}

int main() {
    char *string = stringCat("String List: ", "String1", "String2", "String3");
    printf("%s\n", string); // String List: String1, String2, String3

    string = stringCat("String List2: ", "String4", "String5", "String6", "String7");
    printf("%s\n", string); // String List2: String4, String5, String6

    string = stringCat("String List3: ", "String8", "String9");
    printf("%s\n", string); // String List3: String8, String9, H=
}
