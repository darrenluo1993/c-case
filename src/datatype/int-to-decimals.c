// 整数类型赋值给浮点数（float、double、long double）类型：补足有效小数位
// 对上述代码进行修改：

#include <stdio.h>

int main() {
    int a = 8;
    float b = a; //进行了一次隐式类型转换
    printf("a=%d; b=%f", a, b);
    return 0;
}

// 输出：
//
// a=8; b=8.000000  //%f默认输出6位小数
