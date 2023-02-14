#include<stdio.h>

int main() {

    int arr[5] = {1,2,3,4,5}, i;
    float sum;
    float avg;

    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }

    avg = sum/i;
    printf("%f", avg); 

    return 0;
}