#include <stdio.h>

/* 函数声明 */
double getAverage(int *arr, int size);

int main() {
    /* 带有 5 个元素的整型数组 */
    int balance[5] = {1000, 2, 3, 17, 50};

    /* 传递一个指向数组的指针作为参数 */
    const double avg = getAverage(balance, sizeof(balance) / sizeof(balance[0]));

    /* 输出返回值 */
    printf("Average value is: %f\n", avg);

    return 0;
}

double getAverage(int *arr, int size) {
    if (size <= 0) {
        fprintf(stderr, "Size must be positive.\n");
        return 0; // 或者根据实际情况选择合适的错误处理方式
    }

    int i, sum = 0;

    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }

    // 为了避免整型除法导致的精度损失，将分母也转换为double类型
    double avg = (double) sum / (double) size;

    return avg;
}
