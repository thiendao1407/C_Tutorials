/* Calculate Employee Payroll */
#include <stdio.h>
#include <conio.h>

#define GROSS_PAY_SATURDAY 1.5
#define GROSS_PAY_SUNDAY 2.0

//define enum
enum week {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
typedef enum week day_of_week;

void clear_the_input_buffer();
void clear_the_input_buffer() {
    while(1)
        if(getchar()=='\n')
            break;
}

void main(void) {
    int iHour;
    float fBasicWage, fWage, fTotal =0.0;
    char cDay[][9] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    day_of_week eDay;
    day_of_week tomorrow(day_of_week);

    printf("Please enter the basic wage: ");
    scanf("%f", & fBasicWage);
    clear_the_input_buffer();

    printf("Enter your working hours from Monday to Sunday:\n");
    eDay = SUNDAY;
    do {
        eDay = tomorrow(eDay);
        printf("Enter your working hours on %s :", cDay[eDay]);
        scanf("%d", & iHour);
        switch(eDay) {
        case MONDAY:
        case TUESDAY:
        case WEDNESDAY:
        case THURSDAY:
        case FRIDAY:
            fWage = fBasicWage;
            break;
        case SATURDAY:
            fWage = fBasicWage * GROSS_PAY_SATURDAY;
            break;
        case SUNDAY:
            fWage = fBasicWage * GROSS_PAY_SUNDAY;
            break;
        }
        fTotal += fWage * iHour;
    } while (eDay != SUNDAY);
    printf("The total wage = %8.2f USD.\n", fTotal);
    getch();
}

day_of_week tomorrow(day_of_week en) {
    day_of_week eNextDay;
    switch (en) {
    case SUNDAY:
        eNextDay = MONDAY;
        break;
    case MONDAY:
        eNextDay = TUESDAY;
        break;
    case TUESDAY:
        eNextDay = WEDNESDAY;
        break;
    case WEDNESDAY:
        eNextDay = THURSDAY;
        break;
    case THURSDAY:
        eNextDay = FRIDAY;
        break;
    case FRIDAY:
        eNextDay = SATURDAY;
        break;
    case SATURDAY:
        eNextDay = SUNDAY;
        break;
    }
    return (eNextDay);
}
