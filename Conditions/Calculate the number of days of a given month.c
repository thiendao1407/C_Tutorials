#include<stdio.h>

int main() {
    int month, year, i;
    printf("Enter the month:");
    scanf("%d", & month);
    printf("Enter the year:");
    scanf("%d", & year);
    i = year % 4;
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("31 days"); break;
    case 4: case 6: case 9: case 11: printf("30 days"); break;
    case 2:
        switch(i){
			case 0: printf("29 days"); break;
			case 1: case 2: case 3: printf("28 days"); break;
		}
    default: printf("You entered incorrectly");
    }
    return 0;
}
