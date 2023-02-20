#include<stdio.h>

    struct book
    {

        char name[10];
        float price;
        char author;

    };

int main() {
    
    struct book book;
    scanf("%s", & book.name);
    printf("%s", book.name);
    
}