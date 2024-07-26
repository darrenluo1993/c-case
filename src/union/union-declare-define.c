#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    printf("Memory size occupied by data : %lu\n", sizeof(union Data));

    return 0;
}
