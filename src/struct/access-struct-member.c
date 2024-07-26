#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

struct {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book3;

typedef struct {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} BookType;

int main() {
    struct Book book1; /* 声明 book1，类型为 Book */
    struct Book book2; /* 声明 book2，类型为 Book */
    BookType book4; /* 声明 book4，类型为 BookType */

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

    /* book3 详述 */
    strcpy(book3.title, "Telecom Billing3");
    strcpy(book3.author, "Zara Ali3");
    strcpy(book3.subject, "Telecom Billing Tutorial3");
    book3.book_id = 6495703;

    /* book4 详述 */
    strcpy(book4.title, "Telecom Billing4");
    strcpy(book4.author, "Zara Ali4");
    strcpy(book4.subject, "Telecom Billing Tutorial4");
    book4.book_id = 6495704;

    /* 输出 book1 信息 */
    printf("Book 1 title : %s\n", book1.title);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 subject : %s\n", book1.subject);
    printf("Book 1 book_id : %d\n", book1.book_id);
    printf("------------------------------------------------\n");
    /* 输出 book2 信息 */
    printf("Book 2 title : %s\n", book2.title);
    printf("Book 2 author : %s\n", book2.author);
    printf("Book 2 subject : %s\n", book2.subject);
    printf("Book 2 book_id : %d\n", book2.book_id);
    printf("------------------------------------------------\n");
    /* 输出 book3 信息 */
    printf("Book 3 title : %s\n", book3.title);
    printf("Book 3 author : %s\n", book3.author);
    printf("Book 3 subject : %s\n", book3.subject);
    printf("Book 3 book_id : %d\n", book3.book_id);
    printf("------------------------------------------------\n");
    /* 输出 book4 信息 */
    printf("Book 4 title : %s\n", book4.title);
    printf("Book 4 author : %s\n", book4.author);
    printf("Book 4 subject : %s\n", book4.subject);
    printf("Book 4 book_id : %d\n", book4.book_id);

    return 0;
}
