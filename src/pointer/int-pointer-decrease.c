#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &arr[4]; // 指针指向数组的最后一个元素

    printf("初始值: %d\n", *ptr); // 输出 50

    ptr--; // 递减指针，使其指向前一个整数元素
    printf("递减后值: %d\n", *ptr); // 输出 40

    ptr--; // 再次递减指针
    printf("再次递减后值: %d\n", *ptr); // 输出 30

    return 0;
}
