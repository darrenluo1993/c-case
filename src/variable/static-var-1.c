#include <stdio.h>

void varfunc(void) {
    int var = 0;
    static int static_var = 0;
    printf("var equal: %d\n", var);
    printf("static_var equal: %d\n", static_var);
    var++;
    static_var++;
}

int main(int argc, char *argv[]) {
    for (int i = 0; i < 3; i++)
        varfunc();
    return 0;
}
