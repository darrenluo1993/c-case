// 重新调整内存的大小和释放内存
// 当程序退出时，操作系统会自动释放所有分配给程序的内存，但是，建议您在不需要内存时，都应该调用函数 free() 来释放内存。
//
// 或者，您可以通过调用函数 realloc() 来增加或减少已分配的内存块的大小。让我们使用 realloc() 和 free() 函数，再次查看上面的实例：
//
// 实例
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[100];
    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
    char *description = malloc(30 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory!\n");
    } else {
        strcpy(description, "Zara ali a DPS student.");
    }
    /* 重新分配内存，假设想要存储更大的描述信息 */
    description = (char *) realloc(description, 100 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory!\n");
    } else {
        strcat(description, "She is in class 10th!");
    }

    printf("Name = %s\n", name);
    printf("Description: %s\n", description);

    /* 使用 free() 函数释放内存 */
    free(description);
}

// 当上面的代码被编译和执行时，它会产生下列结果：
// Name = Zara Ali
// Description: Zara ali a DPS student.She is in class 10th!
//
// 您可以尝试一下不重新分配额外的内存，strcat() 函数会生成一个错误，因为存储 description 时可用的内存不足。
