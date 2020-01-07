#include "functions.h"

int main() {
    int currentStudentNumbers = 0;
    studentInformation student[MAX];
    currentStudentNumbers = readFromFile(student, currentStudentNumbers);
    while (yourChoice != 6) {
        printf("\n----------------------------");
        printf("\n1. Search\n\n2. Sort\n\n3. Add\n\n4. Modify\n\n5. Delete\n\n6. Exit\n");
        printf("----------------------------\n");
        printf("\nPlease choose: ");
        gets(ctemp);
        yourChoice = atoi(ctemp);
        switch (yourChoice) {
        case 1:
            searchByX(student, currentStudentNumbers);
            yourChoice = 0;
            break;
        case 2:
            sortByX(student, currentStudentNumbers);
            yourChoice = 0;
            break;
        case 3:
            currentStudentNumbers = addInformation(student, currentStudentNumbers);
            yourChoice = 0;
            break;
        case 4:
            modifyInformation(student, currentStudentNumbers);
            yourChoice = 0;
            break;
        case 5:
            currentStudentNumbers = deleteInformation(student, currentStudentNumbers);
            yourChoice = 0;
            break;
        } // end switch
    } // end while
    yourChoice = 0;
    writeToFile(student, currentStudentNumbers);
}
