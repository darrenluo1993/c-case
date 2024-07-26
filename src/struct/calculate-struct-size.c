#include <stdio.h>

struct Person {
    char name[20];
    int age;
    float height;
};

int main() {
    printf("结构体 Person 大小为: %zu 字节\n", sizeof(struct Person));
    return 0;
}
