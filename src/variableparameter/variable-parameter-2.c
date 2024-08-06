#include <string.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_STR_LEN 100

static char *stringCat(char prefix[], ...) {
    va_list valist;
    va_start(valist, prefix);

    // clear string
    static char string[MAX_STR_LEN];
    if (string[0] != '\0') {
        memset(string, 0, sizeof(string));
    }

    strcat(string, prefix);
    while (true) {
        const char *temp = va_arg(valist, char *);
        if (temp == NULL) {
            break;
        }
        strcat(string, temp);
        strcat(string, ", ");
    }

    va_end(valist);

    // remove last ", "
    string[strlen(string) - 1] = '\0';
    string[strlen(string) - 1] = '\0';

    return string;
}

int main() {
    printf("%s\n", stringCat("String List: ", "String1", "String2", "String3"));
    printf("%s\n", stringCat("String List2: ", "String4", "String5", "String6", "String7"));
}
