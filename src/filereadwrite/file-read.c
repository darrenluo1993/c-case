#include <stdio.h>

int main() {
    FILE *fp = NULL;
    char buff[255];

    fp = fopen("/home/darren/Workspaces/CLion/c-case/resources/test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff);

    fgets(buff, 255, fp);
    printf("2: %s\n", buff);

    fgets(buff, 255, fp);
    printf("3: %s\n", buff);
    fclose(fp);
}
