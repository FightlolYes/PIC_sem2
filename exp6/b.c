#include<stdio.h>

struct time {
   int sec;
   int min;
   int hrs;
};

int main() {

    struct time start, end, diff;

    printf("Enter start time in format HH:MM:SS: ");
    scanf("%d:%d:%d", &start.hrs, &start.min, &start.sec);

    printf("Enter ending time in HH:MM:SS: ");
    scanf("%d:%d:%d", &end.hrs, &end.min, &end.sec);

    if(end.sec < start.sec) {
        end.sec += 60;
        end.min--;
    }

    else if (end.min < start.min) {
        end.min += 60;
        end.hrs--;
    }

    diff.sec = end.sec -start.sec;
    diff.min = end.min - start.min;
    diff.hrs = end.hrs - start.hrs;

    printf("Time difference is: %d:%d:%d", diff.hrs, diff.min, diff.min);

    return 0;
}