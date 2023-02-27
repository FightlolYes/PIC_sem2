#include<stdio.h>

union student
{
    char name[20];
    int roll_no;
};


int main() {

    union student stud;

    printf("Size is: %ld", sizeof(stud));

    return 0;
}