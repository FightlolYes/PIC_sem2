#include<stdio.h>

struct company {
    char name[20];
    char address[1000];
    int phone;
    int noOfEmployee;
};

int main() {

    struct company company[10];

    for(int i = 0; i<10; i++) {

        printf("Company %d name: ", i+1);
        scanf("%s", &company[i].name);

        printf("Company %d address: ", i+1);
        scanf("%s", &company[i].address);

        printf("Company %d phoneno: ", i+1);
        scanf("%d", &company[i].phone);

        printf("Company %d employee count: ", i+1);
        scanf("%d", &company[i].noOfEmployee);
                
    }

    for(int i = 0; i<10; i++) {

        printf("Company %d name: %s\n", i+1, company[i].name);

        printf("Company %d address: %s\n", i+1, company[i].address);

        printf("Company %d phoneno: %d\n", i+1, company[i].phone);

        printf("Company %d employee count: %d\n\n", i+1, company[i].noOfEmployee);
                
    }

    return 0;
}