// float、double、long double 类型赋值给整数类型：直接截断小数
// 如：

#include <stdio.h>

int main() {
    float a = 3.8;
    int b = a; //进行了一次隐式类型转换
    printf("a=%.2f; b=%d", a, b);
    return 0;
}

// 根据转换规则和隐式类型转换规则，输出的结果为：
//
// a=3.80; b=3
