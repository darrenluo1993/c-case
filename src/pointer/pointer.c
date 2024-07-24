// https://www.runoob.com/wp-content/uploads/2014/09/c-pointer.png

#include <stdio.h>

int main() {
    int var_runoob = 10;
    int v = var_runoob;
    int *p = &var_runoob; // 定义指针变量

    printf("vd： %d\n", v);
    printf("vp： %p\n", v);
    printf("&vp： %p\n", &v);
    printf("pd： %d\n", p);
    printf("pp： %p\n", p);
    printf("&var_runoobp： %p\n", &var_runoob);
    printf("&pp： %p\n", &p);

    return 0;
}
