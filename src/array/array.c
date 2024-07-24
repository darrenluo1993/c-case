#include  <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // 打印数组 arr 的地址，arr == &arr == &arr[0]
    printf("%p\n", arr);
    printf("%p\n", &arr);
    printf("%p\n", &arr[0]);
    // 打印数组 arr 的第一个元素的值
    printf("%d\n", arr); // arr只能表示数组的第一个元素的地址，不能表示数组的第一个元素的值
    printf("%d\n", *arr);
    printf("%d\n", arr[0]);

    return 0;
}
