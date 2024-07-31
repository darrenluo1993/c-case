// errno、perror() 和 strerror()
// C 语言提供了 perror() 和 strerror() 函数来显示与 errno 相关的文本消息。
//
// perror() 函数显示您传给它的字符串，后跟一个冒号、一个空格和当前 errno 值的文本表示形式。
// strerror() 函数，返回一个指针，指针指向当前 errno 值的文本表示形式。
// 让我们来模拟一种错误情况，尝试打开一个不存在的文件。您可以使用多种方式来输出错误消息，在这里我们使用函数来演示用法。另外有一点需要注意，您应该使用 stderr 文件流来输出所有的错误。
//
// 实例
#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno; // errno定义在errno.h头文件中，当前程序已经包含了该头文件，此处可以不用声明

int main() {
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "错误号: %d\n", errno);
        perror("通过 perror 输出错误");
        fprintf(stderr, "打开文件错误: %s\n", strerror(errnum));
    } else {
        fclose(pf);
    }
    return 0;
}

// 当上面的代码被编译和执行时，它会产生下列结果：
//
// 错误号: 2
// 通过 perror 输出错误: No such file or directory
// 打开文件错误: No such file or directory
