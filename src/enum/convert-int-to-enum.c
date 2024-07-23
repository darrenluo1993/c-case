#include <stdio.h>
#include <stdlib.h>

int main() {
    enum day {
        saturday,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday
    };

    const int a = 1;
    const enum day weekend = a; //类型转换
    printf("weekend:%d\n", weekend);
    printf("sunday:%d\n", sunday);

    printf("a == sunday:%d\n", a == sunday);
    printf("weekend == sunday:%d\n", weekend == sunday);
    return 0;
}
