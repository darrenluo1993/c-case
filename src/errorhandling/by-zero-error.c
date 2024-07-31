// 被零除的错误
// 在进行除法运算时，如果不检查除数是否为零，则会导致一个运行时错误。
// 为了避免这种情况发生，下面的代码在进行除法运算前会先检查除数是否为零。
//
// 程序退出状态
// 通常情况下，程序成功执行完一个操作正常退出的时候会带有值 EXIT_SUCCESS。在这里，EXIT_SUCCESS 是宏，它被定义为 0。
// 如果程序中存在一种错误情况，当您退出程序时，会带有状态值 EXIT_FAILURE，被定义为 -1。
//
// 实例
#include <stdio.h>
#include <stdlib.h>

int main() {
    int dividend;
    printf("请输入被除数:");
    scanf("%d", &dividend);

    int divisor;
    printf("请输入除数:");
    scanf("%d", &divisor);

    if (divisor == 0) {
        fprintf(stderr, "除数为 0 退出运行...\n");
        exit(EXIT_FAILURE);
    }

    double quotient;
    // int类型除以int类型，所得结果也是int类型，即使接收结果的quotient变量是double类型，也只是将int类型结果转换成double类型
    quotient = dividend / divisor;
    fprintf(stdout, "quotient 变量的值为 : %f\n", quotient);
    // 想要得到double类型的结果，需要将dividend或者divisor转换为double类型
    quotient = (double) dividend / divisor;
    fprintf(stdout, "quotient 变量的值为 : %f\n", quotient);

    exit(EXIT_SUCCESS);
}

// 当上面的代码被编译和执行时，它会产生下列结果：
//
// 除数为 0 退出运行...
