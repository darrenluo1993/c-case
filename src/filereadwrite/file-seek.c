// fseek 可以移动文件指针到指定位置读,或插入写:
// int fseek(FILE *stream, long offset, int whence);
// fseek 设置当前读写点到 offset 处, whence 可以是 SEEK_SET,SEEK_CUR,SEEK_END 这些值决定是从文件头、当前点和文件尾计算偏移量 offset。
//
// 你可以定义一个文件指针 FILE *fp,当你打开一个文件时，文件指针指向开头，你要指到多少个字节，只要控制偏移量就好，
// 例如, 相对当前位置往后移动一个字节：fseek(fp,1,SEEK_CUR); 中间的值就是偏移量。如果你要往前移动一个字节，直接改为负值就可以：fseek(fp,-1,SEEK_CUR)。
//
// 执行以下实例前，确保当前目录下 test.txt 文件已创建：

#include <stdio.h>

int main() {
    FILE *fp = NULL;
    // 注意： 只有用 r+ 模式打开文件才能插入内容，w 或 w+ 模式都会清空掉原来文件的内容再来写，a 或 a+ 模式即总会在文件最尾添加内容，哪怕用 fseek() 移动了文件指针位置。
    fp = fopen("/home/darren/Workspaces/CLion/c-case/resources/test.txt", "r+"); // 确保 test.txt 文件已创建
    fprintf(fp, "This is testing for fprintf...\n");
    fseek(fp, 10, SEEK_SET); //
    if (fputc(65, fp) == EOF) {
        printf("fputc fail");
    }
    fseek(fp, 10, SEEK_CUR);
    if (fputc(66, fp) == EOF) {
        printf("fputc fail");
    }
    fseek(fp, -10, SEEK_END);
    if (fputc(67, fp) == EOF) {
        printf("fputc fail");
    }
    fclose(fp);

    return 0;
}
