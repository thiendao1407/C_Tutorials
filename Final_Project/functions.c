#include "functions.h"

void clear_the_input_buffer() {
  while(1)
    if(getchar()=='\n')
        break;
}

void searchByX(studentInformation student[], int currentNumberOfStudent) {
    if (currentNumberOfStudent == 0)
        printf("\nEmpty list!");
    else {
        do {
            printf("\n----------------------------");
            printf("\n1. Search by name\n\n2. Search by phone number\n\n3. Exit\n");
            printf("----------------------------\n");
            printf("\nPlease choose: ");
            gets(ctemp);
            yourChoice = atoi(ctemp);
            switch (yourChoice) {
            case 1:
                searchByName(student, currentNumberOfStudent);
                break;
            case 2:
                searchByPhoneNumber(student, currentNumberOfStudent);
                break;
            } // end switch
        } while (yourChoice != 3);
    } // end else
}


void searchByName(studentInformation student[], int currentNumberOfStudent) {
    int i, check = 0;
    char name[15];
    printf("\nEnter name: ");
    gets(name);
    for (i=0; i<currentNumberOfStudent; i++) {
        if (strcmpi(name,student[i].name)==0) {
            printf("\nStudent code: %s\nDate of birth: %2d/%2d/%4d\nPhone number: %d\nAddress: %s\nMath/ Foreign Languages/ Literature: %d/ %d/ %d\n"
                   ,student[i].studentCode,student[i].dateOfBirth.date,student[i].dateOfBirth.month,student[i].dateOfBirth.year,student[i].phoneNumber,student[i].address,student[i].score.math,student[i].score.foreignLanguages,student[i].score.literature);
            check++;
        }
    }
    if (check==0)
        printf("\nCan not find!");
}


void searchByPhoneNumber(studentInformation student[], int currentNumberOfStudent) {
    int i, check = 0;
    int phoneNumber;
    printf("\nEnter phone number: (+84)");
    gets(ctemp);
    phoneNumber=atoi(ctemp);
    for (i = 0; i < currentNumberOfStudent; i++) {
        if (student[i].phoneNumber == phoneNumber) {
            printf("\nStudent name: %s\nStudent code: %s\nDate of birth: %2d/%2d/%4d\nAddress: %s\nMath/ Foreign Languages/ Literature: %d/ %d/ %d\n"
                   ,student[i].name,student[i].studentCode,student[i].dateOfBirth.date,student[i].dateOfBirth.month,student[i].dateOfBirth.year,student[i].address,student[i].score.math,student[i].score.foreignLanguages,student[i].score.literature);
            check++;
        }
    }
    if (check == 0)
        printf("\nCan not find!");
}

// Ham sap xep
void sortByX(studentInformation student[], int currentNumberOfStudent) {
    if (currentNumberOfStudent == 0)
        printf("Empty list!");
    else {
        do {
            printf("\n----------------------------");
            printf("\nYou want to sort list by:\n\n1. Math\n\n2. Foreign Languages\n\n3. Literature\n\n4. Exit\n");
            printf("----------------------------\n");
            printf("\nPlease choose: ");
            gets(ctemp);
            yourChoice = atoi(ctemp);
            switch (yourChoice) {
            case 1:
                sortByMathScore(student, currentNumberOfStudent);
                break;
            case 2:
                sortByForeignLanguagesScore(student, currentNumberOfStudent);
                break;
            case 3:
                sortByLiteratureScore(student, currentNumberOfStudent);
                break;
            } // end switch
        } while (yourChoice != 4);
    } // end else
}


void sortByMathScore(studentInformation student[], int currentNumberOfStudent) {
    int i, j;
    studentInformation temp;
        for (i = 0; i < currentNumberOfStudent - 1; i++) {
            for (j = i + 1; j < currentNumberOfStudent; j++) {
                if (student[i].score.math < student[j].score.math) {
                    temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                }
            }
        }
        printf("\n%15s%15s%15s%15s%15s", "Name", "Student code", "Math", "Languages", "Literature");
        for (i = 0; i < currentNumberOfStudent; i++)
            printf("\n%15s%15s%15d%15d%15d", student[i].name, student[i].studentCode, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);

}


void sortByForeignLanguagesScore(studentInformation student[], int currentNumberOfStudent) {
    int i, j;
    studentInformation temp;
        for (i = 0; i < currentNumberOfStudent - 1; i++) {
            for (j = i + 1; j < currentNumberOfStudent; j++) {
                if (student[i].score.foreignLanguages < student[j].score.foreignLanguages) {
                    temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                }
            }
        }
        printf("\n%15s%15s%15s%15s%15s", "Name", "Student code", "Math", "Languages", "Literature");
        for (i = 0; i < currentNumberOfStudent; i++)
            printf("\n%15s%15s%15d%15d%15d", student[i].name, student[i].studentCode, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);
    }



void sortByLiteratureScore(studentInformation student[], int currentNumberOfStudent) {
    int i, j;
    studentInformation temp;
        for (i = 0; i < currentNumberOfStudent - 1; i++) {
            for (j = i + 1; j < currentNumberOfStudent; j++) {
                if (student[i].score.literature < student[j].score.literature) {
                    temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                }
            }
        }
        printf("\n%15s%15s%15s%15s%15s", "Name", "Student code", "Math", "Languages", "Literature");
        for (i = 0; i < currentNumberOfStudent; i++)
            printf("\n%15s%15s%15d%15d%15d", student[i].name, student[i].studentCode, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);
    }




int addInformation(studentInformation student[], int currentNumberOfStudent) {
    int yesno = 0, check = 0;
    //Student code verification
    while (1) {
        printf("\nThe current number of students: %d", currentNumberOfStudent);
        printf("\nInsert student number %d", currentNumberOfStudent + 1);
        // Enter student code
        printf("\nStudent code: ");
        gets(student[currentNumberOfStudent].studentCode);
        if (strlen(student[currentNumberOfStudent].studentCode) == 0) {
            printf("\nInvalid student code!");
            break;
        }
        for (int k = 0; k < currentNumberOfStudent; k++) {
            if (strcmpi(student[currentNumberOfStudent].studentCode, student[k].studentCode) == 0) {
                check = 1;
                break;
            }
        }
        if (check == 1) {
            printf("\nStudent code already exists!");
            break;
        }

        name(student, currentNumberOfStudent);

        dateOfBirth(student, currentNumberOfStudent);

        phoneNumber(student, currentNumberOfStudent);

        address(student, currentNumberOfStudent);

        mathScore(student, currentNumberOfStudent);
        foreignLanguagesScore(student, currentNumberOfStudent);
        literatureScore(student, currentNumberOfStudent);
        // Yes/No
        do {
            printf("\nDo you want to continue?\n1.Yes 2.No: ");
            gets(ctemp);
            yesno = atoi(ctemp);
        } while (yesno != 1 && yesno != 2);
        currentNumberOfStudent = currentNumberOfStudent + 1;
        if(currentNumberOfStudent == MAX) {
            printf("List is full!");
            break;
        } // end if
        if (yesno == 2)
            break;
    } // end while loop

    return currentNumberOfStudent;
}


void modifyInformation(studentInformation student[], int currentNumberOfStudent) {
    if (currentNumberOfStudent==0)
        printf("\nEmpty list!");
    else {
        // Student code verification
        char studentCode[15];
        int check =0, location;
        printf("\nEnter the student code: ");
        gets(studentCode);
        for (location=0; location<currentNumberOfStudent; location++) {
            if(strcmpi(studentCode,student[location].studentCode)==0) {
                check=1;
                break;
            }
        }

        // Modify student information
        do {
            if (check==0) {
                printf("\nStudent code does not exist!");
                break;
            }
            printf("\n----------------------------");
            printf("\n1. Name\n\n2. Date of birth\n\n3. Phone number\n\n4. Address\n\n5. Score\n\n6. Exit\n");
            printf("----------------------------\n");
            printf("\nPlease choose: ");
            gets(ctemp);
            yourChoice = atoi(ctemp);
            switch (yourChoice) {
            case 1:
                name(student,location);
                printf("\nModified information successfully!");
                break;
            case 2:
                dateOfBirth(student,location);
                printf("\nModified information successfully!");
                break;
            case 3:
                phoneNumber(student,location);
                printf("\nModified information successfully!");
                break;
            case 4:
                address(student,location);
                printf("\nModified information successfully!");
                break;
            case 5:
                do {
                    printf("\n----------------------------");
                    printf("\n1. Math\n\n2. Languages\n\n3. Literature\n\n4. Exit\n");
                    printf("----------------------------\n");
                    printf("\nPlease choose: ");
                    gets(ctemp);
                    yourChoice = atoi(ctemp);
                    switch (yourChoice) {
                    case 1:
                        mathScore(student,location);
                        printf("\nModified information successfully!");
                        break;
                    case 2:
                        foreignLanguagesScore(student,location);
                        printf("\nModified information successfully!");
                        break;
                    case 3:
                        literatureScore(student,location);
                        printf("\nModified information successfully!");
                        break;
                    }
                } while (yourChoice!=4);
                yourChoice=0;
                break;
            }
        } while (yourChoice!=6);
        yourChoice=0;
    }
}


int deleteInformation(studentInformation student[], int currentNumberOfStudent) {
    if (currentNumberOfStudent==0)
        printf ("\nEmpty list!");
    else {
        char studentCode[15];
        int check =0, location;
        printf("\nEnter the student code: ");
        gets(studentCode);
        for (location=0; location<currentNumberOfStudent; location++) {
            if(strcmpi(studentCode,student[location].studentCode)==0) {
                check=1;
                break;
            }
        }

        if (check==0)
            printf("\nStudent code does not exist!");
        else {
            // Delete information
            if (location == currentNumberOfStudent - 1) {
                printf("\nDeleted information successfully!");
                currentNumberOfStudent = currentNumberOfStudent - 1;
            } else {
                for (int i = location; i<currentNumberOfStudent-1; i++)
                    student[i]=student[i+1];
                printf("\nDeleted information successfully!");
                currentNumberOfStudent = currentNumberOfStudent - 1;
            }
        }
    }

    return currentNumberOfStudent;
}


void name(studentInformation student[], int currentNumberOfStudent) {
    do {
        printf("Name: ");
        gets(student[currentNumberOfStudent].name);
    } while (strlen(student[currentNumberOfStudent].name) == 0);
}


void dateOfBirth(studentInformation student[], int currentNumberOfStudent) {
    int leapYear;
    printf("Enter the date of birth\n");
    printf("Year:");
    gets (ctemp);
    student[currentNumberOfStudent].dateOfBirth.year=atoi(ctemp);
    leapYear = student[currentNumberOfStudent].dateOfBirth.year % 4;
    do {
        printf("Month:");
        gets (ctemp);
        student[currentNumberOfStudent].dateOfBirth.month=atoi(ctemp);
    } while (student[currentNumberOfStudent].dateOfBirth.month<=0 || student[currentNumberOfStudent].dateOfBirth.month >12);

    switch(student[currentNumberOfStudent].dateOfBirth.month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        do {
            printf("Date:");
            gets (ctemp);
            student[currentNumberOfStudent].dateOfBirth.date=atoi(ctemp);
        } while (student[currentNumberOfStudent].dateOfBirth.date<=0 || student[currentNumberOfStudent].dateOfBirth.date >31);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        do {
            printf("Date:");
            gets(ctemp);
            student[currentNumberOfStudent].dateOfBirth.date=atoi(ctemp);
        } while (student[currentNumberOfStudent].dateOfBirth.date<=0 || student[currentNumberOfStudent].dateOfBirth.date >30);
        break;
    case 2:
        switch(leapYear) { // In leap year, February has 29 days;
        case 0:
            do {
                printf("Date:");
                gets (ctemp);
                student[currentNumberOfStudent].dateOfBirth.date=atoi(ctemp);
            } while (student[currentNumberOfStudent].dateOfBirth.date<=0 || student[currentNumberOfStudent].dateOfBirth.date >29);
            break;
        case 1:
        case 2:
        case 3:
            do {
                printf("Date:");
                gets (ctemp);
                student[currentNumberOfStudent].dateOfBirth.date=atoi(ctemp);
            } while (student[currentNumberOfStudent].dateOfBirth.date<=0 || student[currentNumberOfStudent].dateOfBirth.date >28);
            break;
        }
    }
}


void phoneNumber(studentInformation student[], int currentNumberOfStudent) {
    do {
        printf("Phone number: (+84)");
        gets(ctemp);
        student[currentNumberOfStudent].phoneNumber = atoi(ctemp);
    } while (student[currentNumberOfStudent].phoneNumber == 0);
}


void address(studentInformation student[], int currentNumberOfStudent) {
    printf("Address: ");
    gets(student[currentNumberOfStudent].address);
}


void mathScore(studentInformation student[], int currentNumberOfStudent) {
    printf("Math: ");
    gets(ctemp);
    student[currentNumberOfStudent].score.math = atoi(ctemp);
}


void foreignLanguagesScore(studentInformation student[], int currentNumberOfStudent) {
    printf("Languages: ");
    gets(ctemp);
    student[currentNumberOfStudent].score.foreignLanguages = atoi(ctemp);
}


void literatureScore(studentInformation student[], int currentNumberOfStudent) {
    printf("Literature: ");
    gets(ctemp);
    student[currentNumberOfStudent].score.literature = atoi(ctemp);
}

//Write to file
void writeToFile(studentInformation student[], int currentNumberOfStudent) {
    FILE *f;
    if ((f = fopen("Student list.csv", "w")) == NULL) {
        printf("Can not open file!\n");
        exit(0);
    }
    int i;
    for (i = 0; i < currentNumberOfStudent - 1; i++) //The current number of students is at least 2 to execute the statement
        fprintf(f, "%s, %s, %d/%d/%d, %d, %s, %d, %d, %d\n", student[i].studentCode, student[i].name, student[i].dateOfBirth.date, student[i].dateOfBirth.month,
                student[i].dateOfBirth.year, student[i].phoneNumber, student[i].address, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);

    // write the last line without newline character
    if (currentNumberOfStudent != 0) // to avoid loitering
        fprintf(f, "%s, %s, %d/%d/%d, %d, %s, %d, %d, %d", student[i].studentCode, student[i].name, student[i].dateOfBirth.date, student[i].dateOfBirth.month,
                student[i].dateOfBirth.year, student[i].phoneNumber, student[i].address, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);

    fclose(f);
}
//Read from file
int readFromFile(studentInformation student[], int  currentNumberOfStudent) {
    FILE *f;
    int icount = 0;

    f = fopen("Student list.csv", "r");
    if (f == NULL) {
        printf("Can not open file!\n");
        exit(0);
    }

    // initialize char[] s to read file
    fseek(f, 0, 2);
    char * s = (char * ) malloc(sizeof(char) * (ftell(f)+1));
    rewind(f);

    // Read from file to s
    int c;
    while ((c = fgetc(f)) != EOF) {
        *(s + icount) = c;
        icount++;
    }
    *(s + icount) = '\0';

    //Remove extra spaces and calculate the current number of students
    if (strlen(s) > 1) {
        currentNumberOfStudent = 1;
        for (int i = 1; i < strlen(s); i++) {
            if (s[i] == ' ' && s[i - 1] == ',')
                s[i] = ',';
            if (s[i] == '\n')
                currentNumberOfStudent = currentNumberOfStudent + 1;
        } // end for

        // Read information from array s to variables
        icount = 0;
        char * tokenPtr = strtok(s, ",/\n"); // remove , / and \n
        while (tokenPtr != NULL) {
            switch (icount % 10) {
            case 0:
                strcpy(student[icount/10].studentCode, tokenPtr);
                break;
            case 1:
                strcpy(student[icount/10].name, tokenPtr);
                break;
            case 2:
                student[icount/10].dateOfBirth.date = atoi(tokenPtr);
                break;
            case 3:
                student[icount/10].dateOfBirth.month = atoi(tokenPtr);
                break;
            case 4:
                student[icount/10].dateOfBirth.year = atoi(tokenPtr);
                break;
            case 5:
                student[icount/10].phoneNumber = atoi(tokenPtr);
                break;
            case 6:
                strcpy(student[icount/10].address, tokenPtr);
                break;
            case 7:
                student[icount/10].score.math = atoi(tokenPtr);
                break;
            case 8:
                student[icount/10].score.foreignLanguages = atoi(tokenPtr);
                break;
            case 9:
                student[icount/10].score.literature = atoi(tokenPtr);
                break;
            } //end switch
            icount++;
            tokenPtr = strtok(NULL, ",/\n");
        } // end while

        // Print the list
        for (int i = 0; i < currentNumberOfStudent; i++)
            fprintf(f, "%s, %s, %d/%d/%d, %d, %s, %d, %d, %d\n", student[i].studentCode, student[i].name, student[i].dateOfBirth.date, student[i].dateOfBirth.month,
                student[i].dateOfBirth.year, student[i].phoneNumber, student[i].address, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);

            printf("The number of students: %d\n", currentNumberOfStudent);
    } //end if

    // check for overlapping
    for (int i=0; i< currentNumberOfStudent - 1; i++) {
        for (int j=i+1; j< currentNumberOfStudent; j++) {
            if (strcmpi(student[i].studentCode,student[j].studentCode)==0) {
                printf("The student code %s on line %d and line %d overlap\n",student[i].studentCode, i+1, j+1);
                yourChoice = 6; // thoat vong lap while
            } // end if
        } // end for
    } // end for



    fclose(f);

    return currentNumberOfStudent;
}


