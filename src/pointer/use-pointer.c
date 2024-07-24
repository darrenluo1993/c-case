#include <stdio.h>

int main() {
    int var = 20; /* 实际变量的声明 */
    int *ip = NULL; /* 指针变量的声明，初始值为 NULL，表示没有指向任何地址，若不初始化，则指向的地址为 0x7fffffffdad0，值为 1431654528 */

    /* 在指针变量中存储的地址 */
    printf("赋值前 ip 变量存储的地址: %p\n", ip);

    /* 使用指针访问值 */
    // printf("赋值前 *ip 变量的值: %d\n", *ip); // 空指针访问会导致错误，程序中断

    ip = &var; /* 在指针变量中存储 var 的地址 */

    printf("var 变量的地址: %p\n", &var);

    /* 在指针变量中存储的地址 */
    printf("ip 变量存储的地址: %p\n", ip);

    /* 使用指针访问值 */
    printf("*ip 变量的值: %d\n", *ip);

    return 0;
}
