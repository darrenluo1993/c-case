// 存储长度较长的类型赋值给存储长度较短的类型：舍弃高位（但保留符号），截断低字节给存储长度较短的类型
// 假设定义：

#include <stdio.h>

int main() {
    long long int l = 223372036854775807;
    // 进行赋值：
    int i = (int) l;
    printf("%d\n", i);

    int v = 65535; // 1111 1111 1111 1111
    char c = v; // -1
    char d = v >> 8; // -1
    printf("%d\n", c);
    printf("%d\n", d);
}

// 它们在内存以2进制格式分别存储为：
//
// 00000011 00011001 10010011 10101111 00011101 01111011 11111111 11111111  //Binary of 'l'
//                                     00011101 01111011 11111111 11111111  //Binary of 'i'
// p.s: 此时的 i=494665727。
//
// 顺带说明一下，如果变量 “l” 的后 32 个字节都为 1，那么 v 将等于 -1。
