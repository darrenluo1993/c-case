#include <stdio.h>

int main(const int argc, char *argv[]) {
    printf("Hello, World!\n");
    printf("\n");
    printf("参数个数:%d, 执行脚本:%s，第一个参数：%s，第二个参数：%s\n", argc, argv[0], argv[1], argv[2]);
    printf("\n");
    char *filePath = argv[1];
    printf("需求解析的文件路径:%s\n", filePath);
    printf("\n");
    if (filePath == NULL) {
        printf("参数错误，请输入文件路径！\n");
        return 1;
    }
    return 0;
}
