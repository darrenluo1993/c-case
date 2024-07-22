#include <stdio.h>

int main() {
    // 隐式类型转换
    int i = 10;
    float f = 3.14;
    double d = i + f; // 隐式将int类型转换为double类型
    printf("%f\n", d);

    //显示类型转换
    double e = 3.14159;
    int g = (int) e; // 显式将double类型转换为int类型
    printf("%d\n", g);

    return 0;
}
