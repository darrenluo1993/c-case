#include <stdio.h>
#include <string.h>

/* 定义简单的结构 */
struct Struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} var_struct;

/* 定义位域结构 */
struct BitField {
    unsigned int widthValidated: 1;
    unsigned int heightValidated: 1;
} var_bit_field;

int main() {
    printf("Memory size occupied by struct : %lu\n", sizeof(struct Struct));
    printf("Memory size occupied by bit-field : %lu\n", sizeof(struct BitField));

    return 0;
}
