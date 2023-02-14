#include<stdio.h>

int main() {

    int num, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        flag = 1;
    }

    for(int i = 2; i<= num/2; i++) {
        if(num%i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("Its a prime number");
    }
    else {
        printf("Its not a prime number");
    }

    return 0;
}