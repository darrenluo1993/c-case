#include <stdio.h>

int main() {
    char *chr = "张";
    char *chr1 = "张三";
    printf("%s\n", chr);
    printf("%s\n", chr1);

    char a = 65;
    char b = 'A';
    char c = 255;
    char d = 127;
    char e = -128;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%d\n", b);
    printf("%c\n", c);
    printf("%c\n", d);
    printf("%c\n", e);

    extern int inta;
    extern int intb;

    return 0;
}
