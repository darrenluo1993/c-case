#include <stdio.h>

/* 函数声明 */
void swap(int x, int y);

int main() {
    /* 局部变量定义 */
    const int a = 100;
    const int b = 200;

    printf("交换前，a 的值： %d\n", a); // 100
    printf("交换前，b 的值： %d\n", b); // 200

    /* 调用函数来交换值 */
    swap(a, b);

    printf("交换后，a 的值： %d\n", a); // 100
    printf("交换后，b 的值： %d\n", b); // 200

    return 0;
}

/* 函数定义 */
void swap(int x, int y) {
    const int temp = x; /* 保存 x 的值 */
    x = y; /* 把 y 赋值给 x */
    y = temp; /* 把 temp 赋值给 y */

    printf("交换后，x 的值： %d\n", x); // 200
    printf("交换后，y 的值： %d\n", y); // 100
}
