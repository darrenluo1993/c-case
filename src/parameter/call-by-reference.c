#include <stdio.h>

/* 函数声明 */
void swap(int *x, int *y);

int main() {
    /* 局部变量定义 */
    int a = 100;
    int b = 200;

    printf("交换前，a 的值： %d\n", a); // 输出 100
    printf("交换前，b 的值： %d\n", b); // 输出 200

    /* 调用函数来交换值
     * &a 表示指向 a 的指针，即变量 a 的地址
     * &b 表示指向 b 的指针，即变量 b 的地址
    */
    swap(&a, &b);

    printf("交换后，a 的值： %d\n", a); // 输出 200
    printf("交换后，b 的值： %d\n", b); // 输出 100

    return 0;
}

/* 函数定义 */
void swap(int *x, int *y) {
    const int temp = *x; /* 保存地址 x 的值 */
    *x = *y; /* 把 y 赋值给 x */
    *y = temp; /* 把 temp 赋值给 y */

    printf("交换后，x 的值： %d\n", *x); // 输出 200
    printf("交换后，y 的值： %d\n", *y); // 输出 100
}
