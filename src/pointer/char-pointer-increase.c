#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *ptr = str; // 指针指向字符串的第一个字符

    printf("初始字符: %c\n", *ptr); // 输出 H

    ptr++; // 递增指针，使其指向下一个字符
    printf("递增后字符: %c\n", *ptr); // 输出 e

    return 0;
}
