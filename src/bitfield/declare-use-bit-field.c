#include <stdio.h>

struct PackedStruct {
    unsigned int f1: 1; // 1位的位域
    unsigned int f2: 1; // 1位的位域
    unsigned int f3: 1; // 1位的位域
    unsigned int f4: 1; // 1位的位域
    unsigned int type: 4; // 4位的位域
    unsigned int my_int: 9; // 9位的位域
};

int main() {
    printf("sizeof(struct PackedStruct): %lu\n", sizeof(struct PackedStruct));

    struct PackedStruct pack;

    pack.f1 = 1;
    pack.f2 = 0;
    pack.f3 = 1;
    pack.f4 = 0;
    // type为4位的位域变量，最大只能存储15=00001111，若存储大于15的数值，则左侧的位将被舍弃。
    // 比如存储16=00010000，将被舍弃为00000000=0，存储31=00011111，将被舍弃为00001111=15
    pack.type = 7; // 7=00000111
    pack.my_int = 255;

    printf("f1: %u\n", pack.f1);
    printf("f2: %u\n", pack.f2);
    printf("f3: %u\n", pack.f3);
    printf("f4: %u\n", pack.f4);
    printf("type: %u\n", pack.type);
    printf("my_int: %u\n", pack.my_int);

    return 0;
}
