// 整数提升
// 整数提升是指把小于 int 或 unsigned int 的整数类型转换为 int 或 unsigned int 的过程。请看下面的实例，在 int 中添加一个字符：
//
// 实例
#include <stdio.h>

int main() {
    int i = 17;
    char c = 'c'; /* ascii 值是 99 */
    int sum;

    sum = i + c;
    printf("Value of sum : %d\n", sum);
}

// 当上面的代码被编译和执行时，它会产生下列结果：
//
// Value of sum : 116
// 在这里，sum 的值为 116，因为编译器进行了整数提升，在执行实际加法运算时，把 'c' 的值转换为对应的 ascii 值。
