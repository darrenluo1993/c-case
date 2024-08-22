// 希尔排序
// 希尔排序，也称递减增量排序算法，是插入排序的一种更高效的改进版本。希尔排序是非稳定排序算法。
//
// 希尔排序是基于插入排序的以下两点性质而提出改进方法的：
// 1.插入排序在对几乎已经排好序的数据操作时，效率高，即可以达到线性排序的效率
// 2.但插入排序一般来说是低效的，因为插入排序每次只能将数据移动一位
//
// 过程演示：
// https://www.runoob.com/wp-content/uploads/2018/09/Sorting_shellsort_anim.gif
//
// 实例
#include <stdio.h>

// 函数声明
void shell_sort(int arr[], int len);

int main() {
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    const int len = sizeof(arr) / sizeof(arr[0]); // 计算数组长度

    shell_sort(arr, len); // 调用希尔排序函数

    // 打印排序后的数组
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// 希尔排序函数
void shell_sort(int arr[], const int len) {
    // 计算初始间隔
    for (int gap = len / 2; gap > 0; gap /= 2) {
        // 对每个间隔进行插入排序
        for (int i = gap; i < len; i++) {
            const int temp = arr[i]; // 当前待插入的元素
            int j = i;
            // 移动大于temp的元素
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp; // 插入元素到正确位置
        }
    }
}
