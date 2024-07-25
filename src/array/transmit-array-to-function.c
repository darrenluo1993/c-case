#include <stdio.h>
#include <math.h> // 包含对 NaN 的定义以及无穷大的定义
#include <stdbool.h> // 用于处理布尔类型的判断

/**
 * 计算数组的平均值。
 *
 * @param arr 整数数组，用于计算平均值。
 * @param size 数组的大小。
 * @param isError 指向一个布尔值的指针，用于指示计算过程中是否发生了错误。
 * @return 返回计算得到的平均值，如果发生错误，则返回 NaN。
 */
/* 函数声明 */
double getAverage(int arr[], size_t size, bool *isError);

int main() {
    /* 初始化一个整数数组 */
    /* 带有 5 个元素的整型数组 */
    int balance[5] = {1000, 2, 3, 17, 50};

    bool isError = false;
    /* 调用 getAverage 函数计算数组的平均值 */
    /* 传递一个指向数组的指针、数组大小以及错误状态的指针作为参数 */
    const double avg = getAverage(balance, sizeof(balance) / sizeof(balance[0]), &isError);

    if (isError) {
        printf("计算平均值时发生错误\n");
    } else {
        /* 输出返回值 */
        printf("平均值是： %f\n", avg);
    }

    return 0;
}

double getAverage(int arr[], size_t size, bool *isError) {
    /* 检查数组大小是否为0，如果是，则标记错误并返回 NaN */
    if (size == 0) {
        *isError = true;
        return NAN; // 如果 size 为 0，返回 NaN 作为错误指示
    }

    *isError = false;
    double sum = 0.0;

    /* 累加数组中的所有元素 */
    for (int i = 0; i < size; ++i) {
        sum += (double) arr[i]; // 显式转换为 double 避免潜在的精度损失
    }

    /* 计算平均值 */
    double avg = sum / size;

    return avg;
}
