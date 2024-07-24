#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point points[] = {{1, 2}, {3, 4}, {5, 6}};
    struct Point *ptr = &points[2]; // 指针指向结构体数组的最后一个元素

    printf("初始点: (%d, %d)\n", ptr->x, ptr->y); // 输出 (5, 6)

    ptr--; // 递减指针，使其指向前一个结构体
    printf("递减后点: (%d, %d)\n", ptr->x, ptr->y); // 输出 (3, 4)

    ptr--; // 再次递减指针
    printf("再次递减后点: (%d, %d)\n", ptr->x, ptr->y); // 输出 (1, 2)

    return 0;
}
