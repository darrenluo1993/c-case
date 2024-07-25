#include <stdlib.h>
#include <stdio.h>

#define ARRAY_SIZE 10

// 获取随机值
int getNextValue() {
    return rand();
}

/**
 * @brief 使用从回调函数获取的值填充多个数组。
 *
 * 此函数通过反复调用 getNextValue 函数指针来初始化多个数组。
 * 它展示了使用函数指针动态获取数据的方法，在数据获取逻辑灵活且可以动态替换的情况下尤其有用。
 *
 * @param array 指向要填充的第一个数组的指针。
 * @param array1 类型为 int 的数组，用于存储通过调用 getNextValue 获取的数据。
 * @param array2 大小为 ARRAY_SIZE 的数组，用于存储通过调用 getNextValue 获取的数据。
 * @param getNextValue 一个指向函数的指针，该函数用于获取要填充到数组中的下一个值。
 */
void populate_array(int *array, int array1[], int array2[ARRAY_SIZE], int (*getNextValue)()) {
    printf("%p\n", array);
    printf("%p\n", array1);
    printf("%p\n", array2);
    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        array[i] = getNextValue();
        array1[i] = getNextValue();
        array2[i] = getNextValue();
    }
}

int main(void) {
    /* 定义三个相同大小的整型数组，用于存储由populate_array函数填充的数据 */
    int myarray[ARRAY_SIZE], myarray1[ARRAY_SIZE], myarray2[ARRAY_SIZE];

    /* 调用populate_array函数，为三个数组填充数据 */
    /* 参数myarray, myarray1, myarray2分别用于存储填充后的数据 */
    /* 参数getNextValue是一个函数指针，指向获取下一个值的函数，用于populate_array函数内部获取数据 */
    /* getNextValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int ,而不是函数指针 */
    populate_array(myarray, myarray1, myarray2, getNextValue);

    /* 遍历数组myarray，打印每个元素，用于展示数组填充的结果 */
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    /* 遍历数组myarray1，打印每个元素，用于展示数组填充的结果 */
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", myarray1[i]);
    }
    printf("\n");

    /* 遍历数组myarray2，打印每个元素，用于展示数组填充的结果 */
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", myarray2[i]);
    }
    printf("\n");

    /* 程序正常退出 */
    return 0;
}
