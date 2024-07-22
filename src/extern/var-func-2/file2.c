#include <stdio.h>
#include "variables.h"
#include "functions.h"

int main() {
    // 使用外部变量
    printf("d in main: %d\n", d);
    printf("f in main: %d\n", f);
    
    // 调用外部函数
    printExternVariables();
    printMessage();
    
    return 0;
}