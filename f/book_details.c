#include <stdio.h>

typedef struct {
    char title[100];
    char author[100];
    int year;
    float price;
} Book;

int main() {
    Book b;
    printf("Enter book title: ");
    scanf("%99[^\n]", b.title);
    printf("Enter author name: ");
    scanf("%99[^\n]", b.author);
    printf("Enter year of publication: ");
    scanf("%d", &b.year);
    printf("Enter price: ");
    scanf("%f", &b.price);
    printf("\n--- Book Details ---\n");
    printf("Title : %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Year  : %d\n", b.year);
    printf("Price : $%.2f\n", b.price);
    return 0;
}
