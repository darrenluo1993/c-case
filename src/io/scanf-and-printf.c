#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a value :");
    scanf("%s %d", str, &i); // 在读取字符串时，只要遇到一个空格，scanf() 就会停止读取，所以 "this is test" 对 scanf() 来说是三个字符串。

    printf("\nYou entered: %s %d\n", str, i);
    return 0;
}
