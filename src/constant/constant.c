#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define AREA(x,y) (x*y)

int main() {
    int area = AREA(LENGTH, WIDTH);
    printf("The area of the rectangle is %d\n", area);

    const int LENGTH2 = 10;
    const int WIDTH2 = 5;
    const int AREA2 = LENGTH2 * WIDTH2;
    printf("The area of the rectangle is %d\n", AREA2);
    return 0;
}
