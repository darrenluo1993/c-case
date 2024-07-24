#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point points[] = {{1, 2}, {3, 4}, {5, 6}};
    struct Point *ptr = points; // 指针指向结构体数组的第一个元素

    printf("sizeof(struct Point): %lu\n", sizeof(struct Point)); // 输出 8

    printf("初始点: (%d, %d)\n", ptr->x, ptr->y); // 输出 (1, 2)

    ptr++; // 递增指针，使其指向下一个结构体
    printf("递增后点: (%d, %d)\n", ptr->x, ptr->y); // 输出 (3, 4)

    return 0;
}
