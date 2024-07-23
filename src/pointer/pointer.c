#include <stdio.h>

int main() {
    int var_runoob = 10;
    int v;
    v = &var_runoob;
    int *p; // 定义指针变量
    p = &var_runoob;

    printf("vd： %d\n", v);
    printf("vp： %p\n", v);
    printf("pd： %d\n", p);
    printf("pp： %p\n", p);
    printf("&vp： %p\n", &v);
    return 0;
}
