#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

/* 函数声明 */
void printBook(struct Book *book);

int main() {
    struct Book book1; /* 声明 book1，类型为 Book */
    struct Book book2; /* 声明 book2，类型为 Book */

    /* book1 详述 */
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    /* book2 详述 */
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    /* 通过传 book1 的地址来输出 book1 信息 */
    printBook(&book1); // 指针传递
    printf("Book modified book_id(outside) : %d\n", book1.book_id);
    printf("------------------------------------------------\n");
    /* 通过传 book2 的地址来输出 book2 信息 */
    printBook(&book2); // 指针传递
    printf("Book modified book_id(outside) : %d\n", book2.book_id);

    return 0;
}

void printBook(struct Book *book) {
    printf("Book address : %p\n", book);
    printf("Book titile address : %p\n", &book->title);
    printf("Book titile address with *book : %p\n", &(*book).title);
    printf("Book title : %s\n", book->title);
    printf("Book title with *book : %s\n", (*book).title);
    printf("Book author : %s\n", book->author);
    printf("Book subject : %s\n", book->subject);
    printf("Book book_id : %d\n", book->book_id);
    book->book_id += 1;
    (*book).book_id += 1;
    printf("Book modified book_id(inside) : %d\n", book->book_id);
}
