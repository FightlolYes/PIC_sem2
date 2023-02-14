#include<stdio.h>

int main()
{
    
    int n[10];
    
    for(int i = 0; i<10; i++) {
        scanf("%d", &n[i]);
    }

    for(int i = 0; i<10; i++) {
        if(i%2 == 0) {
            printf("%d\n", i*i);
        }

        else {
            printf("%d\n", i*i*i);
        }
    }

    return 0;
}
