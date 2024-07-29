// typedef vs #define
// #define 是 C 指令，用于为各种数据类型定义别名，与 typedef 类似，但是它们有以下几点不同：
//
// typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
// typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。

#include <stdio.h>
#include <string.h>

// 为结构体 Books 定义别名 Book
typedef struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

// 为结构体 Book 定义别名 Book1
typedef Book Book1;

// 为结构体 Book 定义别名 Book2
#define Book2 Book

int main() {
    Book book;
    Book1 book1;
    Book2 book2;

    strcpy(book.title, "C 教程");
    strcpy(book.author, "Runoob");
    strcpy(book.subject, "编程语言");
    book.book_id = 12345;

    printf("书标题 : %s\n", book.title);
    printf("书作者 : %s\n", book.author);
    printf("书类目 : %s\n", book.subject);
    printf("书 ID : %d\n", book.book_id);

    printf("-----------------\n");

    strcpy(book1.title, "C 教程1");
    strcpy(book1.author, "Runoob1");
    strcpy(book1.subject, "编程语言1");
    book1.book_id = 123451;

    printf("书标题1 : %s\n", book1.title);
    printf("书作者1 : %s\n", book1.author);
    printf("书类目1 : %s\n", book1.subject);
    printf("书 ID1 : %d\n", book1.book_id);

    printf("-----------------\n");

    strcpy(book2.title, "C 教程2");
    strcpy(book2.author, "Runoob2");
    strcpy(book2.subject, "编程语言2");
    book2.book_id = 123452;

    printf("书标题2 : %s\n", book2.title);
    printf("书作者2 : %s\n", book2.author);
    printf("书类目2 : %s\n", book2.subject);
    printf("书 ID2 : %d\n", book2.book_id);

    return 0;
}
