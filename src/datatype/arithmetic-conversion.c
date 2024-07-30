// 常用的算术转换
// 常用的算术转换是隐式地把值强制转换为相同的类型。编译器首先执行整数提升，如果操作数类型不同，则它们会被转换为下列层次中出现的最高层次的类型：
//
// https://www.runoob.com/wp-content/uploads/2014/08/usual_arithmetic_conversion.png
// 常用的算术转换不适用于赋值运算符、逻辑运算符 && 和 ||。让我们看看下面的实例来理解这个概念：
//
// 实例
#include <stdio.h>

int main() {
    int i = 17;
    char c = 'c'; /* ascii 值是 99 */
    float sum;

    sum = i + c;
    printf("Value of sum : %f\n", sum);
}

// 当上面的代码被编译和执行时，它会产生下列结果：
//
// Value of sum : 116.000000
// 在这里，c 首先被转换为整数，但是由于最后的值是 float 型的，所以会应用常用的算术转换，编译器会把 i 和 c 转换为浮点型，并把它们相加得到一个浮点数。
