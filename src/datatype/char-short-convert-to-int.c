// 对于 char 和 short 类型，进行运算时将会被隐式转换为 int，看代码：

#include <stdio.h>

int main() {
    char c = 22, ch = 33;
    short m = 23, n = 32;
    printf("%lu\n", sizeof(c + ch)); //char和char类型的运算
    printf("%lu\n", sizeof(m + n)); //short和short类型的运算
    printf("%lu", sizeof(m + ch)); //short和char类型的运算
    return 0;
}

// 输出：
//
// 4
// 4
// 4
