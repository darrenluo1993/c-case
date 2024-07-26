// 位域内存测试
#include <stdio.h>

struct ONE_BYTE {
    unsigned char _bool: 1;
    unsigned char del_flag: 1;
    unsigned char status: 4;
} one_byte;

struct TWO_BYTE {
    unsigned char ccc1: 4;
    unsigned char ccc2: 4;
    unsigned char ccc3: 4;
    unsigned char ccc4: 4;
} two_byte;

struct THREE_BYTE {
    unsigned char ccc1: 4;
    unsigned char ccc2: 4;
    unsigned char ccc3: 4;
    unsigned char ccc4: 4;
    unsigned char ccc5: 4;
} three_byte;

struct FOUR_BYTE {
    unsigned int ccc1: 16;
    unsigned int ccc2: 16;
} four_byte;

struct EIGHT_BYTE {
    unsigned char ccc1: 1;
    unsigned int ccc2: 1;
} eight_byte;

int main(int argc, char const *argv[]) {
    printf("sizeof one_byte is : %lu\n", sizeof(one_byte));
    printf("sizeof two_byte is : %lu\n", sizeof(two_byte));
    printf("sizeof three_byte is : %lu\n", sizeof(three_byte));
    printf("sizeof four_byte is : %lu\n", sizeof(four_byte));
    // 关于最后的 struct EIGHT_BYTE 所占用内存大小的分析：unsigned int 类型需要用 4 个字节的内存空间来存储，unsigned char 类型需要 1 个字节的内存空间来存储，
    // 但是这里位域使用方面，ccc1 和 ccc2 都只使用了 1 位，即各占用 1 个 Bit，所以系统按照 ccc2 的 unsigned int 类型开辟了 4 个字节来存放这个位域变量，所以最终 sizeof(eight_byte) 的结果应该是 4 才对。
    printf("sizeof eight_byte is : %lu\n", sizeof(eight_byte));
    return 0;
}
