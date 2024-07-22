#include <stdio.h>

int main() {
    /* 一个带有 5 行 2 列的数组 */
    const int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    /* 输出数组中每个元素的值 */
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    printf("-----------\n");

    /* 另一种方式初始化数组 */
    const int b[5][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("b[%d][%d] = %d\n", i, j, b[i][j]);
        }
    }

    return 0;
}
