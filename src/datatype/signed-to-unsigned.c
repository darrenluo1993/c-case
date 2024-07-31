//  signed 类型赋值给 unsigned 类型：直接传递数值
// 给个小技巧：如果你想“临时”给一个不知道正负的 signed 类型的变量加上绝对值，可以使用abs函数，但利用(unsigned)(signed类型变量名)可以节省一点内存开销
//
// 但是也有弊端：可能会出现 unsigned-unsigned 永远大于 0 的情况（不确定）
//
// 最后补充一下，强制类型转换只是临时类型转换，并不影响变量本身储存的值，看如下代码：

#include <stdio.h>

int main() {
    int m = -2147483648; //这个数字为-2^31, int类型最小存储数字的值即为-2^31
    unsigned int n = m;
    printf("unsigned of m=%u\n", m); //这里有一次隐式类型转换(int => unsigned int)
    printf("signed of m=%d\n", m);
    printf("unsigned of n=%u\n", n);
    putchar('\n');
    float a = 6.9;
    printf("%.3f\n", a);
    ((int) a);
    printf("%.3f", a);
    return 0;
}

// 输出结果：
//
// unsigned of m=2147483648
// signed of m=-2147483648
// unsigned of n=2147483648
//
// 6.900
// 6.900
