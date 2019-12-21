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

void searchByX(studentInformation student[], int currentStudentNumbers);
void searchByName(studentInformation student[], int currentStudentNumbers);
void searchByPhoneNumber(studentInformation student[], int currentStudentNumbers);

void sortByX(studentInformation student[], int currentStudentNumbers);
void sortByMathScore(studentInformation student[], int currentStudentNumbers);
void sortByForeignLanguagesScore(studentInformation student[], int currentStudentNumbers);
void sortByLiteratureScore(studentInformation student[], int currentStudentNumbers);

int addInformation(studentInformation student[], int currentStudentNumbers);
void modifyInformation(studentInformation student[], int currentStudentNumbers);
int deleteInformation(studentInformation student[], int currentStudentNumbers);

void dateOfBirth(studentInformation student[], int currentStudentNumbers);
void name(studentInformation student[], int currentStudentNumbers);
void phoneNumber(studentInformation student[], int currentStudentNumbers);
void address(studentInformation student[], int currentStudentNumbers);

void mathScore(studentInformation student[], int currentStudentNumbers);
void foreignLanguagesScore(studentInformation student[], int currentStudentNumbers);
void literatureScore(studentInformation student[], int currentStudentNumbers);


void writeToFile(studentInformation student[], int currentStudentNumbers);

int readFromFile(studentInformation student[], int currentStudentNumbers);


