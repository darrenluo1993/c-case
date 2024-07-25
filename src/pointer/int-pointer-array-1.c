#include <stdio.h>

int main() {
    int num1 = 10, num2 = 20, num3 = 30;

    // 声明一个整数指针数组，包含三个指针
    int *ptrArray[3];

    // 将指针指向不同的整数变量
    ptrArray[0] = &num1;
    ptrArray[1] = &num2;
    ptrArray[2] = &num3;

    // 使用指针数组访问这些整数变量的值
    printf("Value at index 0: %d\n", *ptrArray[0]);
    printf("Value at index 1: %d\n", *ptrArray[1]);
    printf("Value at index 2: %d\n", *ptrArray[2]);

    return 0;
}
