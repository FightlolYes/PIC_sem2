#include<stdio.h>
 
struct student {
    char book[100];
    float price;
    int pages;
};

int main() {

    struct student student; 

    printf("Enter book name: ");
    scanf("%s", &student.book);
     
    printf("Enter book price: ");
    scanf("%f", &student.price);

    printf("Enter number of pages: ");
    scanf("%d", &student.pages);

    printf("Name: %s\n", student.book);
    printf("Price: %3.2f\n", student.price);
    printf("Number of pages: %d\n", student.pages);

    return 0;
}