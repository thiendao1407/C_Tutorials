#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 50


typedef struct Address {
    char district[30];
    char city[30];
} address;

typedef struct Phonebook {
    char name[30];
    address personalAddress;
    int phoneNumber;
} phonebook;


void insertPesonalInfomation(phonebook db[], int *m);
void findPhoneNumbers(phonebook db[], int m);
void printTheList(phonebook db[], int m);


void insertPesonalInfomation(phonebook db[], int *m) {
    char ctemp[15];
    int j;
    while (*m < MAX && j != 2) {
        printf("The value of m: %d\n", *m);
        printf("Enter the contact information of the person number %d:\n", *m + 1);
        printf("Name: ");
        gets(db[*m].name);
        printf("Address\n");
        printf("District: ");
        gets(db[*m].personalAddress.district);
        printf("City: ");
        gets(db[*m].personalAddress.city);
        do {
            printf("Phone number: ");
            gets(ctemp);
            db[*m].phoneNumber = atoi(ctemp);
        } while (db[*m].phoneNumber == 0);
        printf("Do you want to continue?\n1.Yes 2.No\n");
        gets(ctemp);
        j = atoi(ctemp);
        *m=*m+1;
    };
    printf("The value of m: %d\n", *m);
}


void findPhoneNumbers(phonebook db[], int m) {
    char ctemp[15];
    int phoneNumber, count = 0;
    printf("Enter the phone number: ");
    gets(ctemp);
    phoneNumber = atoi(ctemp);
    for (int i = 0; i < m; i++)
        if (phoneNumber == db[i].phoneNumber) {
            printf("Code: %d\nName: %s\nAddress: district %s, city %s\nPhone number: %d\n", i + 1, db[i].name, db[i].personalAddress.district, db[i].personalAddress.city, db[i].phoneNumber);
            count++;
        }
    if (count == 0)
        printf("Sorry, we cannot find!\n");
}


void printTheList(phonebook db[], int m) {
    int count = 0;
    phonebook x;
    printf("Enter the district: ");
    gets(x.personalAddress.district);
    for (int i = 0; i < m; i++)
        if (strcmpi(db[i].personalAddress.district, x.personalAddress.district) == 0) {
            printf("Code: %d\nName: %s\nPhone number: %d\n", i + 1, db[i].name, db[i].phoneNumber);
            count++;
        }
    if (count == 0)
        printf("Sorry, we cannot find!\n");
}

void main(void) {
    phonebook db[MAX];
    char ctemp[10];
    int m = 0, n;
    do {
        printf("Please choose:\n1. Insert new information\n2. Find phone numbers\n3. Print the list\n4. Exit\n");
        gets(ctemp);
        n = atoi(ctemp);
        switch (n) {
        case 1:
            insertPesonalInfomation(db, &m);
            break;
        case 2:
            findPhoneNumbers(db, m);
            break;
        case 3:
            printTheList(db, m);
            break;
        }
    } while (n != 4);
}
