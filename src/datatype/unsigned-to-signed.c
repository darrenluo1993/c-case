// unsigned类型赋值给signed类型：直接传递数值
// 注意：如果 unsigned 类型储存的量太大，强制类型转换后可能会出现 signed 类型的值的绝对值不等于 unsigned 类型的值的绝对值的情况。
//
// 说到 “unsigned 类型储存的量太大”，顺带说一下，虽然 printf 输出 int 和 unsigned int 时可以混用 %d（或%i）和 %u（或%ui），但还是建议输出 int 类型的时候用 %d（或%i），输出 unsigned int 类型时用 %u（或%ui）（其它类型同理<如%ul等>）
//
// 看一个例子：

#include <stdio.h>

int main() {
    unsigned int x = 4294967295; //这个数字为(2^32)-1, 而int类型最大存储数字的值为(2^31)-1
    int y = (int) x;
    printf("signed of x=%d\n", x); //这里有一次隐式类型转换(unsigned int => int)
    printf("unsigned of x=%u\n", x);
    printf("signed of y=%d\n", y);
    putchar('\n');
    unsigned int m = 2147483647; //这个数字为(2^31)-1, int类型最大存储数字的值即为(2^31)-1
    int n = (int) m;
    printf("signed of m=%d\n", m); //这里有一次隐式类型转换(unsigned int => int)
    printf("unsigned of m=%u\n", m);
    printf("signed of n=%d", n);

    return 0;
}

// 可是因为隐式类型转换，结果输出为：
//
// signed of x=-1
// unsigned of x=4294967295
// signed of y=-1
//
// signed of m=2147483647
// unsigned of m=2147483647
// signed of n=2147483647
// 出现“-1”的这个输出就是因为“unsigned类型储存的量太大（大于了同类型但signed的类型）”
//
// p.s: 不一定都为 -1，具体要看 unsigned 类型的值的 2 进制
