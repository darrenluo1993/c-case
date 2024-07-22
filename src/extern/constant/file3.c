#include <stdio.h>
#include "file1.h"

extern const int LENGTH2;
extern const int WIDTH2;
extern const int AREA2;

int main() {
    printf("The length is %d, the width is %d, area is %d!\n", LENGTH, WIDTH, AREA);
    printf("The length2 is %d, the width2 is %d, area2 is: %d!\n", LENGTH2, WIDTH2, AREA2);

    return 0;
}
