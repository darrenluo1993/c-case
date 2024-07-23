#include <stdio.h>

int main() {
    const int staticArray[] = {1, 2, 3, 4, 5}; // 静态数组声明并初始化
    const int length = sizeof(staticArray) / sizeof(staticArray[0]);

    printf("静态数组: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", staticArray[i]);
    }
    printf("\n");

    return 0;
}
