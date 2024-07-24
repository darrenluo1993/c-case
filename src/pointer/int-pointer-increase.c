#include <stdio.h>

int main() {
    // 定义一个整数数组
    int var[] = {10, 100, 200, 300, 400};

    int i = 0;
    // 循环遍历数组
    // 定义一个整数指针 ptr，将指针 ptr 指向数组 var 的起始地址
    // 每循环一次，将指针 ptr 移动到下一个数组元素的位置
    for (int *ptr = var; i < sizeof(var) / sizeof(int); i++, ptr++) {
        // 打印当前指针 ptr 所指向的地址
        printf("存储地址：var[%d] = %p\n", i, ptr);
        // 打印当前指针 ptr 所指向地址的值
        printf("存储值：var[%d] = %d\n", i, *ptr);
        // 打印分隔符
        printf("-------------------------------\n");
    }

    return 0;
}
