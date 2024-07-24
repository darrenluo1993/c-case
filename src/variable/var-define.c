#include <stdio.h>

int main() {
    char charArray[] = "张";
    char *charPointer = charArray;
    char charArray1[] = "张三";
    char *charPointer1 = charArray1;
    printf("%s\n", charArray);
    printf("%c\n", charArray[0]);
    printf("%c\n", *charPointer);
    printf("%s\n", charArray1);
    printf("%c\n", charArray1[0]);
    printf("%c\n", *charPointer1);

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
