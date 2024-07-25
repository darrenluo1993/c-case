#include <stdio.h>

int main() {
    int v = 100;
    int *pt1 = &v; // 获取 v 的地址
    int **pt2 = &pt1; // 使用运算符 & 获取 pt1 的地址

    /* 使用 pptr 获取值 */
    printf("v = %d //变量v的值\n", v);
    printf("&v = %p //变量v的地址\n", &v);
    printf("pt1 = %p //指针pt1指向的地址，即变量v的地址\n", pt1);
    printf("*pt1 = %d //指针pt1指向的值，即变量v的值\n", *pt1);
    printf("&pt1 = %p //指针pt1的地址\n", &pt1);
    printf("pt2 = %p //指针pt2指向的地址，即指针pt1的地址\n", pt2);
    printf("**pt2 = %d //指针pt2指向的指针指向的值，即变量v的值\n", **pt2);

    return 0;
}
