// 冒泡排序
// 冒泡排序（英语：Bubble Sort）是一种简单的排序算法。它重复地走访过要排序的数列，一次比较两个元素，如果他们的顺序（如从大到小、首字母从A到Z）错误就把他们交换过来。
// 总共进行n-1轮排序，其中n为要排序的数据个数，每轮排序找出除上一轮找出的最大元素之外的最大元素，且本轮找出的最大元素不会与上一轮找出的最大元素进行比较，然后将本轮找出的最大元素放置在上一轮找出的最大元素前面。
//
// 过程演示：
// https://www.runoob.com/wp-content/uploads/2018/09/Bubble_sort_animation.gif
//
// 实例
#include <stdio.h>

// 函数声明
void bubble_sort(int arr[], int len);

int main() {
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    const int len = sizeof(arr) / sizeof(arr[0]); // 计算数组长度

    // 打印排序前的数组
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            printf("%d", arr[i]);
            break;
        }
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    bubble_sort(arr, len); // 调用冒泡排序函数

    // 打印排序后的数组
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            printf("%d", arr[i]);
            break;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}

// 冒泡排序函数
void bubble_sort(int arr[], const int len) {
    for (int i = 0; i < len - 1; i++) {
        printf("第%d轮排序：\n", i + 1);
        for (int j = 0; j < len - 1 - i; j++) {
            // 打印排序前的数组
            printf("排序前：");
            for (int k = 0; k < len; k++) {
                if (k == len - 1) {
                    printf("%d", arr[k]);
                    break;
                }
                printf("%d ", arr[k]);
            }
            printf("\n");
            printf("下标值：j = %d\tj + 1 = %d\n", j, j + 1);
            printf("交换前：arr[j] = %d\tarr[j+1] = %d\n", arr[j], arr[j + 1]);
            // 交换元素位置
            if (arr[j] > arr[j + 1]) {
                const int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                printf("交换后：arr[j] = %d\tarr[j+1] = %d\n", arr[j], arr[j + 1]);
            }
            // 打印排序后的数组
            printf("排序后：");
            for (int k = 0; k < len; k++) {
                if (k == len - 1) {
                    printf("%d", arr[k]);
                    break;
                }
                printf("%d ", arr[k]);
            }
            printf("\n\n");
        }
    }
}
