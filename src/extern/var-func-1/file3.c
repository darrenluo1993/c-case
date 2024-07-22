#include <stdio.h>
#include "file2.h"

int main() {
    // 调用file2.h中的变量
    printf("调用file2.h中的变量：\n");
    printf("a + b + c + d = %d\n", a + b + c + d);
    // 调用file2.h中的函数
    printf("调用file2.h中的函数：\n");
    func1();
    return 0;
}
