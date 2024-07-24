#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *start = arr; // 指向数组的第一个元素
    int *end = &arr[4]; // 指向数组的最后一个元素
    int *ptr;

    for (ptr = start; ptr <= end; ptr++) {
        printf("当前指针指向的值: %d\n", *ptr);
    }

    return 0;
}
