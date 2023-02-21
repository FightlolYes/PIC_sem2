#include<stdio.h>
#include<string.h>

int main() {

    char username[10] = "Yash07";
    char inuser[10];

    int num;
    int facto = 1;

    printf("Enter username: ");
    gets(inuser);

    if(strcmp(username, inuser) == 0) {
        printf("Hello %s, enter a number: ", inuser);
        scanf("%d", &num);

        for(int i = 1; i<=num; i++) {
            facto = facto*i;
        }

        printf("Factorial: %d", facto);

    }

    else {
        printf("Wrong username!, try again");
    }

    return 0;
}
