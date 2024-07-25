#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 10

/**
 * 生成一个指定大小的随机数数组
 * @return 指向随机数数组的指针
 */
/* 要生成和返回随机数的函数 */
int *getRandom() {
    static int r[size]; // 使用局部静态数组，不同调用之间相互隔离

    for (int i = 0; i < size; ++i) {
        r[i] = rand(); // 不再需要设置种子，因为每次调用都会生成不同的随机数序列
        printf("r[%d] = %d\n", i, r[i]);
    }

    return r;
}

/* 要调用上面定义函数的主函数 */
int main() {
    /* 初始化随机数生成器 */
    /* 设置随机数种子 */
    srand(time(NULL));

    /* 一个指向整数的指针 */
    const int *p = getRandom();
    for (int i = 0; i < size; i++) {
        printf("*(p + %d) : %d\n", i, *(p + i));
    }

    return 0;
}
