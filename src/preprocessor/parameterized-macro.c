#include <stdio.h>

#define square(x) ((x) * (x))
#define square_1(x) (x * x)
#define MAX(x, y) (x > y ? x : y)

int main(void) {
    printf("square(5 + 4) = ((5 + 4) * (5 + 4)) is %d\n", square(5 + 4)); // 81
    printf("square_1(5 + 4) = (5 + 4 * 5 + 4) is %d\n", square_1(5 + 4)); // 29
    printf("Max between 20 and 10 is %d\n", MAX(10, 20)); // 20
    return 0;
}
