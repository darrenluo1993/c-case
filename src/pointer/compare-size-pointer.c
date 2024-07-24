#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[1]; // 指向 arr[1]，值为 20
    int *ptr2 = &arr[3]; // 指向 arr[3]，值为 40

    if (ptr1 < ptr2) {
        printf("ptr1 在 ptr2 之前\n"); // 这行会被输出
    } else {
        printf("ptr1 在 ptr2 之后或相同位置\n");
    }

    if (ptr1 > ptr2) {
        printf("ptr1 在 ptr2 之后\n");
    } else {
        printf("ptr1 在 ptr2 之前或相同位置\n"); // 这行会被输出
    }

    return 0;
}
