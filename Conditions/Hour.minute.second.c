#include<stdio.h>

int main() {
    int hour, minute, second, extra;
    printf("Enter hour/minute/second: ");
    scanf("%x/%x/%x", & hour, & minute, & second);
    printf("Enter the number of extra seconds:");
    scanf("%x", & extra);
    if (second + extra < 60)
        second = second + extra;
    else {
        second = second + extra - 60;
        minute = minute + 1;
    }

    if (minute >= 60) {
        minute = minute - 60;
        hour = hour + 1;
    }
    if (hour > 0 && minute > 0 && second > 0 && extra > 0)
        printf("hh/mm/ss: %2x/%2x/%2x", hour, minute, second);
    else printf("Error! Please enter positive integers");
    return 0;
}
