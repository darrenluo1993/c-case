#include <stdio.h>

#define LENGTH(array) (sizeof(array) / sizeof(array[0]))

int main() {
    const int arr[] = {1, 2, 3, 4, 5};

    const int sizeof1 = sizeof(arr);
    printf("Size of array is %d\n", sizeof1);

    const int sizeof2 = sizeof(arr[0]);
    printf("Size of array element is %d\n", sizeof2);

    int length = sizeof1 / sizeof2;
    printf("Length of array is %d\n", length);

    length = LENGTH(arr);
    printf("Length of array is %d\n", length);

    printf("Length of array is %ld\n", LENGTH(arr));

    return 0;
}
