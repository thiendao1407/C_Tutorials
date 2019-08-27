#include<stdio.h>

int main() {
    int hour, minute, second, extra;
    int day = 0;
    printf("Please enter hours/minutes/seconds => ");
    scanf("%d/%d/%d", & hour, & minute, & second);
    printf("\nHow many seconds do you want to add: ");
    scanf("%d", & extra);

    if (hour < 0 || minute < 0 || second < 0 || extra < 0) {
        printf("\nError! Please enter positive integers\n");
        return -1;
    }

    second = second + extra;
    while (second >= 60) {
        second = second - 60;
        minute = minute + 1;
    }

    while (minute >= 60) {
        minute = minute - 60;
        hour = hour + 1;
    }
    while (hour >= 24) {
        day++;
        hour = hour - 24;
    }
    printf("\nTime now dd/hh/mm/ss: %d/%d/%d/%d", day, hour, minute, second);
    return 0;
}
