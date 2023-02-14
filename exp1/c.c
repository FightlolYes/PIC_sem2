#include <stdio.h> 

int main() {

    int a, b, max, flag=1;

    printf("Enter the first number");
    scanf("%d", &a);

    printf("Enter the second number");
    scanf("%d", &b);

    max = (a > b) ? a:b;

    while(flag) {
        if(max%a == 0 && max %b == 0) {
            printf("LCM is %d", max);
            break;
        }
        max += 1;
    }

    return 0;
}