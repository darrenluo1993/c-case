#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int *ptr1 = &a;
    int *ptr2 = &a;
    int *ptr3 = &b;

    if (ptr1 == ptr2) {
        printf("ptr1 和 ptr2 指向相同的内存地址\n"); // 这行会被输出
    } else {
        printf("ptr1 和 ptr2 指向不同的内存地址\n");
    }

    if (ptr1 != ptr3) {
        printf("ptr1 和 ptr3 指向不同的内存地址\n"); // 这行会被输出
    } else {
        printf("ptr1 和 ptr3 指向相同的内存地址\n");
    }

    return 0;
}
