#include <stdio.h>

int main() {
    /* 带有 5 个元素的整型数组 */
    const int size = 5;
    const double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    const double *p = balance;

    /* 输出数组中每个元素的值 */
    printf("balance的数组值\n");
    for (int i = 0; i < size; i++) {
        printf("*(balance + %d) : %f\n", i, *(balance + i));
    }

    /* 输出数组中每个元素的值 */
    printf("balance的数组值\n");
    for (int i = 0; i < size; i++) {
        printf("balance[%d] : %f\n", i, balance[i]);
    }

    /* 输出数组中每个元素的值 */
    printf("balance指针的数组值\n");
    for (int i = 0; i < size; i++) {
        printf("*(p + %d) : %f\n", i, *(p + i));
    }

    /* 输出数组中每个元素的值 */
    printf("balance指针的数组值\n");
    for (int i = 0; i < size; i++) {
        printf("p[%d] : %f\n", i, p[i]);
    }

    return 0;
}
