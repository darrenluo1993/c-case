// 斐波那契数列
// f(0) = 0;
// f(1) = 1;
// f(2) = f(1) + f(0);
// f(3) = f(2) + f(1);
// f(n) = f(n-1) + f(n-2);
// 示例：
// n = 4; f(4) = f(3) + f(2) = f(2) + f(1) + f(1) + f(0) = f(1) + f(0) + f(1) + f(1) + f(0) = 3;
// 下面的实例使用递归函数生成一个给定的数的斐波那契数列：
//
// 实例
#include <stdio.h>

static int fibonacci(int i) {
    if (i <= 1) {
        return i;
    }
    return fibonacci(i - 1) + fibonacci(i - 2);
}

int main() {
    for (int i = 0; i < 10; i++) {
        if (i <= 1) {
            printf("f(%d)               = %d\n", i, fibonacci(i));
        } else {
            printf("f(%d) = f(%d) + f(%d) = %d\n", i, i - 1, i - 2, fibonacci(i));
        }
    }
    return 0;
}

// 当上面的代码被编译和执行时，它会产生下列结果：
//
// f(0)               = 0
// f(1)               = 1
// f(2) = f(1) + f(0) = 1
// f(3) = f(2) + f(1) = 2
// f(4) = f(3) + f(2) = 3
// f(5) = f(4) + f(3) = 5
// f(6) = f(5) + f(4) = 8
// f(7) = f(6) + f(5) = 13
// f(8) = f(7) + f(6) = 21
// f(9) = f(8) + f(7) = 34
