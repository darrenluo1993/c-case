#include <stdio.h>
#include <string.h>

#define SIZE 10

int main() {
    char str[SIZE];
    char str1[SIZE];

    printf("Enter a value :\n");
    gets(str); // 测试机
    // fgets函数功能：从文件指针stream中读取字符，存到以s为起始地址的空间里，直到读完N-1个字符，或者读完一行。
    // 注意：调用fgets函数时，最多只能读入n-1个字符。读入结束后，系统将自动在最后加'\0'，并以str1作为函数值返回。
    fgets(str1, SIZE, stdin); // 物理机

    printf("\nstr length: %lu\n", strlen(str)); // 9
    printf("str1 length: %lu\n", strlen(str1)); // 9

    printf("\nYou entered: \n");
    puts(str); // 测试机
    fputs(str1, stdout); // 物理机
    return 0;
}
