#include <stdio.h>

#define N 2+3
#define F (2+3)

int main() {
    double a;
    a = (float) N / (float) 2;
    printf("a 的值为 : %.2f\n", a);
    a = (float) F / (float) 2;
    printf("a 的值为 : %.2f\n", a);

    return 0;
}
