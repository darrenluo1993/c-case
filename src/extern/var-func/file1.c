#include <stdio.h>

// 定义并初始化外部变量
int d = 3;
int f = 5;

// 定义函数打印外部变量
void printExternVariables() {
    printf("d: %d, f: %d\n", d, f);
}
