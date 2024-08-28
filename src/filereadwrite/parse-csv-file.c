#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024 // 定义最大行长度

int main() {
    FILE *file = fopen("../resources/students.csv", "r");
    char buffer[MAX_LINE_LENGTH];
    char *token;

    // 打开CSV文件
    if (file == NULL) {
        perror("无法打开文件");
        return 1;
    }

    // 跳过文件头
    fgets(buffer, MAX_LINE_LENGTH, file);

    // 循环读取并解析每一行
    while (fgets(buffer, MAX_LINE_LENGTH, file) != NULL) {
        // 去除换行符
        char *line_break = strchr(buffer, '\n');
        if (line_break != NULL) {
            *line_break = '\0';
        }
        token = strtok(buffer, ",");
        while (token != NULL) {
            // 处理每个字段
            printf("%s,", token);
            token = strtok(NULL, ",");
        }
        printf("\n");
    }

    // 关闭文件
    fclose(file);

    return 0;
}
