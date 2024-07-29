#include <stdio.h>

int main(int argc, char *argv[]) {
    /* 打开一个文件用于追加写入 */
    FILE *file = fopen("/home/darren/Workspaces/CLion/c-case/resources/students.csv", "a+");

    /* 将格式化的字符串写入文件，并返回写入的字符数 */
    int rtn_val = fprintf(file, "4,John,10,女\n");
    /* 输出fprintf的返回值，用于检查写入是否成功 */
    printf("fprintf returned %d\n", rtn_val);

    /* 将格式化的字符串写入文件，并返回写入的字符数 */
    rtn_val = fprintf(file, "%d,%s,%d,%s\n", 6, "Mike", 11, "男");
    /* 输出fprintf的返回值，用于检查写入是否成功 */
    printf("fprintf returned %d\n", rtn_val);

    /* 将字符串写入文件，不包括格式化信息，并返回写入的字符数 */
    rtn_val = fputs("5,Mary,12,男\n", file);
    /* 输出fputs的返回值，用于检查写入是否成功 */
    printf("fputs returned %d\n", rtn_val);

    /* 关闭文件，确保文件写入操作完成并释放资源 */
    fclose(file);

    return 0;
}
