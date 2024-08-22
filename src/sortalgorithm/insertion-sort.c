// 插入排序
// 插入排序（英语：Insertion Sort）是一种简单直观的排序算法。
// 它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。
// 插入排序在实现上，通常采用in-place排序（即只需用到 {\displaystyle O(1)} {\displaystyle O(1)}的额外空间的排序），因而在从后向前扫描过程中，需要反复把已排序元素逐步向后挪位，为最新元素提供插入空间。
//
// 过程演示：
// https://www.runoob.com/wp-content/uploads/2018/09/Insertion_sort_animation.gif
//
// 实例
#include <stdio.h>

// 函数声明
void insertion_sort(int arr[], int len);

int main() {
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    const int len = sizeof(arr) / sizeof(arr[0]); // 计算数组长度

    insertion_sort(arr, len); // 调用插入排序函数

    // 打印排序后的数组
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// 插入排序函数
void insertion_sort(int arr[], const int len) {
    for (int i = 1; i < len; i++) {
        const int temp = arr[i]; // 当前待插入的元素
        int j = i;
        // 向右移动大于temp的元素
        while (j > 0 && arr[j - 1] > temp) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = temp; // 插入元素到正确位置
    }
}
