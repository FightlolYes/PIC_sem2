#include<stdio.h>

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sm, lg, i;

    sm = arr[0];
    lg = arr[0];

    for(i = 0; i<10; i++) {
        if(arr[i] < sm) {
            sm = arr[i];
        }

        if(arr[i] > lg) {
            lg = arr[i];
        }
    }

    printf("Smallest value is %d \n", sm);
    printf("Largest value is %d", lg);

    return 0;
}