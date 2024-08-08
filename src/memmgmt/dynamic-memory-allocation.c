// 动态分配内存
// 编程时，如果您预先知道数组的大小，那么定义数组时就比较容易。例如，一个存储人名的数组，它最多容纳 100 个字符，所以您可以定义数组，如下所示：
// char name[100];
//
// 但是，如果您预先不知道需要存储的文本长度，例如您想存储有关一个主题的详细描述。在这里，我们需要定义一个指针，该指针指向未定义所需内存大小的字符，后续再根据需求来分配内存，如下所示：
//
// 实例
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 静态分配内存，分配内存大小为 100 * sizeof(char) 个字节
    char name[100];
    strcpy(name, "Zara Ali");

    // 动态分配内存，分配内存大小为 150 * sizeof(char) 个字节
    char *title = calloc(150, sizeof(char));
    if (title == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory for title!\n");
    } else {
        strcpy(title, "Zara ali a student!");
    }

    // 动态分配内存，分配内存大小为 200 * sizeof(char) 个字节
    char *description = malloc(200 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory for description!\n");
    } else {
        strcpy(description, "Zara ali a DPS student in class 10th!");
    }

    printf("Name = %s\n", name);
    printf("Title: %s\n", title);
    printf("Description: %s\n", description);

    // 释放内存
    free(title);
    free(description);
}

// 当上面的代码被编译和执行时，它会产生下列结果：
// Name = Zara Ali
// Title: Zara ali a student!
// Description: Zara ali a DPS student in class 10th!
//
// 上面的程序也可以使用 calloc() 来编写，只需要把 malloc 替换为 calloc 即可，如下所示：
// calloc(200, sizeof(char));
//
// 当动态分配内存时，您有完全控制权，可以传递任何大小的值。而那些预先定义了大小的数组，一旦定义则无法改变大小。
