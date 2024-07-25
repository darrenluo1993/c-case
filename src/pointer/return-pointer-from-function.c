#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define size 10

/**
 * 获取一个包含10个随机数的数组
 * @return 指向静态数组的指针，该数组包含10个随机数
 */
/* 要生成和返回随机数的函数 */
int *getRandom() {
    /* 静态数组，用于存储随机数 */
    static int r[size]; // 保持静态数组，以满足不改变函数输出的要求
    /* 标志变量，用于检查种子是否已经初始化 */
    static bool seedInitialized = false;

    /* 如果种子未初始化，则使用当前时间设置随机数生成器的种子 */
    /* 仅在第一次调用时设置种子 */
    if (!seedInitialized) {
        srand(time(NULL));
        seedInitialized = true;
    }

    /* 生成10个随机数并打印 */
    for (int i = 0; i < size; ++i) {
        r[i] = rand();
        printf("%d\n", r[i]);
    }

    /* 返回包含随机数的数组 */
    return r;
}

/* 要调用上面定义函数的主函数 */
int main() {
    /* 指向int类型的指针，用于存储从getRandom函数返回的数组指针 */
    /* 一个指向整数的指针 */
    int *p;

    /* 调用getRandom函数并存储返回的数组指针 */
    p = getRandom();
    /* 遍历数组并打印每个随机数 */
    for (int i = 0; i < size; i++) {
        printf("*(p + [%d]) : %d\n", i, *(p + i)); // 保持不变以满足不改变内部字符串的要求
    }

    /* 程序正常结束 */
    return 0;
}
