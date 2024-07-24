#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *ptr = &str[4]; // 指针指向字符串的最后一个字符 'o'

    printf("初始字符: %c\n", *ptr); // 输出 o

    ptr--; // 递减指针，使其指向前一个字符
    printf("递减后字符: %c\n", *ptr); // 输出 l

    ptr--; // 再次递减指针
    printf("再次递减后字符: %c\n", *ptr); // 输出 l

    return 0;
}
