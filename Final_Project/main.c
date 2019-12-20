#include "functions.h"

int main() {
    int currentNumberOfStudent = 0;
    studentInformation student[MAX];
    currentNumberOfStudent = readFromFile(student, currentNumberOfStudent);
    while (yourChoice != 6) {
        printf("\n----------------------------");
        printf("\n1. Search\n\n2. Sort\n\n3. Add\n\n4. Modify\n\n5. Delete\n\n6. Exit\n");
        printf("----------------------------\n");
        printf("\nPlease choose: ");
        gets(ctemp);
        yourChoice = atoi(ctemp);
        switch (yourChoice) {
        case 1:
            searchByX(student, currentNumberOfStudent);
            yourChoice = 0;
            break;
        case 2:
            sortByX(student, currentNumberOfStudent);
            yourChoice = 0;
            break;
        case 3:
            currentNumberOfStudent = addInformation(student, currentNumberOfStudent);
            yourChoice = 0;
            break;
        case 4:
            modifyInformation(student, currentNumberOfStudent);
            yourChoice = 0;
            break;
        case 5:
            currentNumberOfStudent = deleteInformation(student, currentNumberOfStudent);
            yourChoice = 0;
            break;
        } // end switch
    } // end while
    yourChoice = 0;
    writeToFile(student, currentNumberOfStudent);
}
