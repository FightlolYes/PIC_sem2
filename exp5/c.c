#include<stdio.h>
#include<string.h>

int main() {

    char string[100] = "Yash@232107";
    int alp = 0, digit = 0, spchar = 0;

    for(int i = 1; i <= strlen(string); i++) {
        if(string[i] >= 65 && string[i] <= 90|| string[i]>=97 && string[i] <=122) {
            alp += 1;
        }
        else if(string[i]>=48 && string[i]<=57) {
            digit+=1;
        }
        else {
            spchar += 1;
        }
        
    }

    printf("Alphabets: %d \n", alp); 
    printf("Digit: %d \n", digit);
    printf("Special Chars: %d \n", spchar);

    return 0;
}