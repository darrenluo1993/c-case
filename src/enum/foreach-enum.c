// 在 C 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的，所以按照 C 语言规范是没有办法遍历枚举类型的。

#include <stdio.h>

enum DAY {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
} day;

enum DAY1 {
    MON1 = 1, TUE1, WED1, THU1 = 7, FRI1, SAT1, SUN1
} day1;

enum MONTH {
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
} month;

int main() {
    // 遍历枚举元素，枚举类型必须连续的可以实现有条件的遍历，输入1-7
    for (day = MON; day <= SUN; day++) {
        printf("枚举元素：%d\n", day);
    }
    printf("---------\n");
    // 遍历枚举元素，枚举类型不是连续的不可以实现有条件的遍历，输出1-10
    for (day1 = MON1; day1 <= SUN1; day1++) {
        printf("枚举元素：%d\n", day1);
    }
    printf("---------\n");
    // 遍历枚举元素，枚举类型必须连续的可以实现有条件的遍历，输入1-12
    for (month = JAN; month <= DEC; month++) {
        printf("枚举元素：%d\n", month);
    }
}
