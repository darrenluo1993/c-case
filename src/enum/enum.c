#include <stdio.h>

enum DAY {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
};

enum SEASON {
    SPRING, SUMMER = 3, AUTUMN, WINTER
};

enum {
    RED = 0xff0000, GREEN = 0x00ff00, BLUE = 0x0000ff
};

int main() {
    const enum DAY day = WED;
    printf("WED = %d\n", day); // WED = 3

    printf("SPRING = %d\n", SPRING); // SPRING = 0
    printf("AUTUMN = %d\n", AUTUMN); // AUTUMN = 4
    printf("WINTER = %d\n", WINTER); // WINTER = 5

    printf("RED = %x\n", RED); // RED = ff0000
    printf("GREEN = %x\n", GREEN); // GREEN = 00ff00
    printf("BLUE = %x\n", BLUE); // BLUE = 0000ff

    return 0;
}
