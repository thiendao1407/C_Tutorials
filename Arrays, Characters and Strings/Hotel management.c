#include<stdio.h>
#include <stdlib.h>
#include<string.h>

#define MAX 50

void book_a_room(int room[], int number_of_rooms);
void check_out(int room[], int number_of_rooms);
void available_rooms(int room[], int number_of_rooms);
void occupied_rooms(int room[], int number_of_rooms);

int main() {
    int room[MAX];
    char ctemp[15];
    int your_choice = 0, number_of_rooms = 0;

    do {
        printf("Please enter the number of rooms: ");
        gets(ctemp);
        number_of_rooms = atoi(ctemp);
    } while (number_of_rooms < 1 || number_of_rooms > MAX);

    printf("1. Available room\n2. Occupied rooms\n");
    for (int i = 0; i < number_of_rooms; i++) {
        while (room[i] != 1 && room[i] != 2) {
            printf("Enter status of room %d: ", i + 1);
            gets(ctemp);
            room[i] = atoi(ctemp);
        }
    }

    do {
        printf("\n-------------------\n1. Book a room\n2. Check out\n3. Available rooms\n4. Occupied rooms\n5. Exit\n-------------------\nPlease choose an option: ");
        gets(ctemp);
        your_choice = atoi(ctemp);
        printf("\n");
        switch (your_choice) {
        case 1:
            book_a_room(room, number_of_rooms);
            your_choice = 0;
            break;
        case 2:
            check_out(room, number_of_rooms);
            your_choice = 0;
            break;
        case 3:
            available_rooms(room, number_of_rooms);
            your_choice = 0;
            break;
        case 4:
            occupied_rooms(room, number_of_rooms);
            your_choice = 0;
            break;
        };
    } while (your_choice != 5);
    return 0;
}

void book_a_room(int room[], int number_of_rooms) {
    char ctemp[15];
    int your_choice = 0;

    while (your_choice < 1 || your_choice > number_of_rooms) {
        printf("You want to book a room, please choose room number: ");
        gets(ctemp);
        your_choice = atoi(ctemp);
    }

    if (room[your_choice - 1] == 1) {
        printf("Room number %d is available\n", your_choice);
        printf("Do you want to book room number %d?\n", your_choice);
        int yes_no;
        while (yes_no != 1 && yes_no != 2) {
            printf("1. Yes or 2. No?\n");
            gets(ctemp);
            yes_no = atoi(ctemp);
        }
        if (yes_no == 1) {
            printf("You have booked room number %d\n", your_choice);
            room[your_choice - 1] = 2;
        }
    } else
        printf("Room number %d has been sold, please go to option 3\n", your_choice);
    printf("\n\n");
}
void check_out(int room[], int number_of_rooms) {
    char ctemp[15];
    int your_choice = 0;

    while (your_choice < 1 || your_choice > number_of_rooms) {
        printf("You want to check out, please choose room number: ");
        gets(ctemp);
        your_choice = atoi(ctemp);
    }

    if (room[your_choice - 1] == 1)
        printf("Room number %d is still available, please go to option 4\n", your_choice);
    else {
        printf("Do you want to check out of room number %d?\n", your_choice);
        int yes_no = 0;
        while (yes_no != 1 && yes_no != 2) {
            printf("1. Yes or 2. No?\n");
            gets(ctemp);
            yes_no = atoi(ctemp);
        }

        if (yes_no == 1) {
            printf("You have checked out of room number %d\n", your_choice);
            room[your_choice - 1] = 1;
        }
    }
    printf("\n\n");
}

void available_rooms(int room[], int number_of_rooms) {
    printf("Available rooms: ");
    int icount = 0;
    for (int i = 0; i < number_of_rooms; i++)
        if (room[i] == 1) {
            printf(" %d,", i+1);
            icount++;
        }
    if (icount==0)
        printf("none");
    printf("\n\n");
}

void occupied_rooms(int room[], int number_of_rooms) {
    printf("Occupied rooms: ");
    int icount = 0;
    for (int i = 0; i < number_of_rooms; i++)
        if (room[i] == 2){
            printf(" %d,", i+1);
            icount++;
        }
    if (icount==0)
        printf("none");
    printf("\n\n");
}

