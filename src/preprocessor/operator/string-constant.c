#include <stdio.h>

// 宏延续运算符（\）
// 字符串常量化运算符（#）
#define  message_for(a, b)  \
printf(#a" and "#b": We love you!\n")

int main(void) {
    message_for(Carole, Debra); // 预处理，直接进行文本替换，字符串不需要用双引号包围
    return 0;
}
