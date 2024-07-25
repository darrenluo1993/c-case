#include <stdio.h>

int main() {
    const char *names[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali",
    };

    int size = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < size; i++) {
        printf("Value of names[%d] = %s\n", i, names[i]);
        printf("Address of names[%d] = %p\n", i, names[i]);
        printf("------------------------------------\n");
    }
    return 0;
}
