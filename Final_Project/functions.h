#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 50

int yourChoice;
char ctemp[15];

typedef struct Subjects {
    int math;
    int literature;
    int foreignLanguages;
} subjects;
typedef struct Time {
    int date;
    int month;
    int year;
} time;


typedef struct StudentInformation {
    char studentCode[15];
    char name[15];
    time dateOfBirth;
    int phoneNumber;
    char address[15];
    subjects score;
} studentInformation;

void clear_the_input_buffer();

void searchByX(studentInformation student[], int currentNumberOfStudent);
void searchByName(studentInformation student[], int currentNumberOfStudent);
void searchByPhoneNumber(studentInformation student[], int currentNumberOfStudent);

void sortByX(studentInformation student[], int currentNumberOfStudent);
void sortByMathScore(studentInformation student[], int currentNumberOfStudent);
void sortByForeignLanguagesScore(studentInformation student[], int currentNumberOfStudent);
void sortByLiteratureScore(studentInformation student[], int currentNumberOfStudent);

int addInformation(studentInformation student[], int currentNumberOfStudent);
void modifyInformation(studentInformation student[], int currentNumberOfStudent);
int deleteInformation(studentInformation student[], int currentNumberOfStudent);

void dateOfBirth(studentInformation student[], int currentNumberOfStudent);
void name(studentInformation student[], int currentNumberOfStudent);
void phoneNumber(studentInformation student[], int currentNumberOfStudent);
void address(studentInformation student[], int currentNumberOfStudent);

void mathScore(studentInformation student[], int currentNumberOfStudent);
void foreignLanguagesScore(studentInformation student[], int currentNumberOfStudent);
void literatureScore(studentInformation student[], int currentNumberOfStudent);


void writeToFile(studentInformation student[], int currentNumberOfStudent);

int readFromFile(studentInformation student[], int currentNumberOfStudent);


