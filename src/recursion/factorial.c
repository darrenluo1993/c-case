// 数的阶乘
// f(0) = 1;
// f(1) = 1;
// f(2) = 2 * f(1);
// f(3) = 3 * f(2);
// f(n) = n * f(n-1);
// 示例：
// n = 4; f(4) = 4 * f(3) = 4 * 3 * f(2) = 4 * 3 * 2 * f(1) = 4 * 3 * 2 * 1 = 24;
// 下面的实例使用递归函数计算一个给定的数的阶乘：
//
// 实例
#include <stdio.h>

double factorial(unsigned int i) {
    if (i <= 1) {
        return 1;
    }
    return i * factorial(i - 1);
}

int main() {
    int i = 15;
    printf("%d 的阶乘为 %f\n", i, factorial(i));
    return 0;
}

// 当上面的代码被编译和执行时，它会产生下列结果：
//
// 15 的阶乘为 1307674368000.000000
