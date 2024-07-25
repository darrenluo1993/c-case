#include <stdio.h>

int main() {
    int arr[] = {10, 100, 200};
    int size = sizeof(arr) / sizeof(arr[0]), *ptr[size];

    for (int i = 0; i < size; i++) {
        ptr[i] = &arr[i]; /* 赋值为整数的地址 */
    }
    for (int i = 0; i < size; i++) {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
        printf("Address of var[%d] = %p\n", i, ptr[i]);
        printf("----------------------------------\n");
    }
    return 0;
}
