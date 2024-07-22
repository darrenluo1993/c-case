// 二维数组在逻辑上是方阵，由行和列组成。
// 但是二维数组在物理上是线性的，按行来依次进行存放，内存是连续的。
// 二维数组名的步长是一行的长度，比如一下例子中：
// age + 1 address is 00EFFC04
// age + 2 address is 00EFFC14
// 因为每一行有四个元素，每个int类型的元素占四个字节，一行有16个字节，所以数组名age加1后地址增加了16个字节说明数组名的步长为一行的长度。
// 具体到每一个元素加1的时候，地址增加的是一个元素所占字节的大小，因此元素的步长即为元素本身的大小，例如：
// age[2][0] + 0 address is 00EFFC14
// age[2][0] + 1 address is 00EFFC18
// 示例及运行结果：

#include <stdio.h>

int main() {
    int age[6][4];
    for (int i = 0; i < sizeof(age) / sizeof(age[0]); i++) {
        printf("age + %d address is %p\n", i, age + i);
    }
    for (int i = 0; i < sizeof(age) / sizeof(age[0]); i++) {
        for (int j = 0; j < sizeof(age[0]) / sizeof(int); j++) {
            printf("age[%d][0] + %d address is %p\n", i, j, &age[i][0] + j);
        }
    }
}
