#include "functions.h"

void clear_the_input_buffer() {
  while(1)
    if(getchar()=='\n')
        break;
}

void searchByX(studentInformation student[], int currentStudentNumbers) {
    if (currentStudentNumbers == 0)
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
                searchByName(student, currentStudentNumbers);
                break;
            case 2:
                searchByPhoneNumber(student, currentStudentNumbers);
                break;
            } // end switch
        } while (yourChoice != 3);
    } // end else
}


void searchByName(studentInformation student[], int currentStudentNumbers) {
    int i, check = 0;
    char name[15];
    printf("\nEnter name: ");
    gets(name);
    for (i=0; i<currentStudentNumbers; i++) {
        if (strcmpi(name,student[i].name)==0) {
            printf("\nStudent code: %s\nDate of birth: %2d/%2d/%4d\nPhone number: %d\nAddress: %s\nMath/ Foreign Languages/ Literature: %d/ %d/ %d\n"
                   ,student[i].studentCode,student[i].dateOfBirth.date,student[i].dateOfBirth.month,student[i].dateOfBirth.year,student[i].phoneNumber,student[i].address,student[i].score.math,student[i].score.foreignLanguages,student[i].score.literature);
            check++;
        }
    }
    if (check==0)
        printf("\nCan not find!");
}


void searchByPhoneNumber(studentInformation student[], int currentStudentNumbers) {
    int i, check = 0;
    int phoneNumber;
    printf("\nEnter phone number: (+84)");
    gets(ctemp);
    phoneNumber=atoi(ctemp);
    for (i = 0; i < currentStudentNumbers; i++) {
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
void sortByX(studentInformation student[], int currentStudentNumbers) {
    if (currentStudentNumbers == 0)
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
                sortByMathScore(student, currentStudentNumbers);
                break;
            case 2:
                sortByForeignLanguagesScore(student, currentStudentNumbers);
                break;
            case 3:
                sortByLiteratureScore(student, currentStudentNumbers);
                break;
            } // end switch
        } while (yourChoice != 4);
    } // end else
}


void sortByMathScore(studentInformation student[], int currentStudentNumbers) {
    int i, j;
    studentInformation temp;
        for (i = 0; i < currentStudentNumbers - 1; i++) {
            for (j = i + 1; j < currentStudentNumbers; j++) {
                if (student[i].score.math < student[j].score.math) {
                    temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                }
            }
        }
        printf("\n%15s%15s%15s%15s%15s", "Name", "Student code", "Math", "Languages", "Literature");
        for (i = 0; i < currentStudentNumbers; i++)
            printf("\n%15s%15s%15d%15d%15d", student[i].name, student[i].studentCode, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);

}


void sortByForeignLanguagesScore(studentInformation student[], int currentStudentNumbers) {
    int i, j;
    studentInformation temp;
        for (i = 0; i < currentStudentNumbers - 1; i++) {
            for (j = i + 1; j < currentStudentNumbers; j++) {
                if (student[i].score.foreignLanguages < student[j].score.foreignLanguages) {
                    temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                }
            }
        }
        printf("\n%15s%15s%15s%15s%15s", "Name", "Student code", "Math", "Languages", "Literature");
        for (i = 0; i < currentStudentNumbers; i++)
            printf("\n%15s%15s%15d%15d%15d", student[i].name, student[i].studentCode, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);
    }



void sortByLiteratureScore(studentInformation student[], int currentStudentNumbers) {
    int i, j;
    studentInformation temp;
        for (i = 0; i < currentStudentNumbers - 1; i++) {
            for (j = i + 1; j < currentStudentNumbers; j++) {
                if (student[i].score.literature < student[j].score.literature) {
                    temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                }
            }
        }
        printf("\n%15s%15s%15s%15s%15s", "Name", "Student code", "Math", "Languages", "Literature");
        for (i = 0; i < currentStudentNumbers; i++)
            printf("\n%15s%15s%15d%15d%15d", student[i].name, student[i].studentCode, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);
    }




int addInformation(studentInformation student[], int currentStudentNumbers) {
    int yesno = 0, check = 0;
    //Student code verification
    while (1) {
        printf("\nThe current number of students: %d", currentStudentNumbers);
        printf("\nInsert student number %d", currentStudentNumbers + 1);
        // Enter student code
        printf("\nStudent code: ");
        gets(student[currentStudentNumbers].studentCode);
        if (strlen(student[currentStudentNumbers].studentCode) == 0) {
            printf("\nInvalid student code!");
            break;
        }
        for (int k = 0; k < currentStudentNumbers; k++) {
            if (strcmpi(student[currentStudentNumbers].studentCode, student[k].studentCode) == 0) {
                check = 1;
                break;
            }
        }
        if (check == 1) {
            printf("\nStudent code already exists!");
            break;
        }

        name(student, currentStudentNumbers);

        dateOfBirth(student, currentStudentNumbers);

        phoneNumber(student, currentStudentNumbers);

        address(student, currentStudentNumbers);

        mathScore(student, currentStudentNumbers);
        foreignLanguagesScore(student, currentStudentNumbers);
        literatureScore(student, currentStudentNumbers);
        // Yes/No
        do {
            printf("\nDo you want to continue?\n1.Yes 2.No: ");
            gets(ctemp);
            yesno = atoi(ctemp);
        } while (yesno != 1 && yesno != 2);
        currentStudentNumbers = currentStudentNumbers + 1;
        if(currentStudentNumbers == MAX) {
            printf("List is full!");
            break;
        } // end if
        if (yesno == 2)
            break;
    } // end while loop

    return currentStudentNumbers;
}


void modifyInformation(studentInformation student[], int currentStudentNumbers) {
    if (currentStudentNumbers==0)
        printf("\nEmpty list!");
    else {
        // Student code verification
        char studentCode[15];
        int check =0, location;
        printf("\nEnter the student code: ");
        gets(studentCode);
        for (location=0; location<currentStudentNumbers; location++) {
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


int deleteInformation(studentInformation student[], int currentStudentNumbers) {
    if (currentStudentNumbers==0)
        printf ("\nEmpty list!");
    else {
        char studentCode[15];
        int check =0, location;
        printf("\nEnter the student code: ");
        gets(studentCode);
        for (location=0; location<currentStudentNumbers; location++) {
            if(strcmpi(studentCode,student[location].studentCode)==0) {
                check=1;
                break;
            }
        }

        if (check==0)
            printf("\nStudent code does not exist!");
        else {
            // Delete information
            if (location == currentStudentNumbers - 1) {
                printf("\nDeleted information successfully!");
                currentStudentNumbers = currentStudentNumbers - 1;
            } else {
                for (int i = location; i<currentStudentNumbers-1; i++)
                    student[i]=student[i+1];
                printf("\nDeleted information successfully!");
                currentStudentNumbers = currentStudentNumbers - 1;
            }
        }
    }

    return currentStudentNumbers;
}


void name(studentInformation student[], int currentStudentNumbers) {
    do {
        printf("Name: ");
        gets(student[currentStudentNumbers].name);
    } while (strlen(student[currentStudentNumbers].name) == 0);
}


void dateOfBirth(studentInformation student[], int currentStudentNumbers) {
    int leapYear;
    printf("Enter the date of birth\n");
    printf("Year:");
    gets (ctemp);
    student[currentStudentNumbers].dateOfBirth.year=atoi(ctemp);
    leapYear = student[currentStudentNumbers].dateOfBirth.year % 4;
    do {
        printf("Month:");
        gets (ctemp);
        student[currentStudentNumbers].dateOfBirth.month=atoi(ctemp);
    } while (student[currentStudentNumbers].dateOfBirth.month<=0 || student[currentStudentNumbers].dateOfBirth.month >12);

    switch(student[currentStudentNumbers].dateOfBirth.month) {
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
            student[currentStudentNumbers].dateOfBirth.date=atoi(ctemp);
        } while (student[currentStudentNumbers].dateOfBirth.date<=0 || student[currentStudentNumbers].dateOfBirth.date >31);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        do {
            printf("Date:");
            gets(ctemp);
            student[currentStudentNumbers].dateOfBirth.date=atoi(ctemp);
        } while (student[currentStudentNumbers].dateOfBirth.date<=0 || student[currentStudentNumbers].dateOfBirth.date >30);
        break;
    case 2:
        switch(leapYear) { // In leap year, February has 29 days;
        case 0:
            do {
                printf("Date:");
                gets (ctemp);
                student[currentStudentNumbers].dateOfBirth.date=atoi(ctemp);
            } while (student[currentStudentNumbers].dateOfBirth.date<=0 || student[currentStudentNumbers].dateOfBirth.date >29);
            break;
        case 1:
        case 2:
        case 3:
            do {
                printf("Date:");
                gets (ctemp);
                student[currentStudentNumbers].dateOfBirth.date=atoi(ctemp);
            } while (student[currentStudentNumbers].dateOfBirth.date<=0 || student[currentStudentNumbers].dateOfBirth.date >28);
            break;
        }
    }
}


void phoneNumber(studentInformation student[], int currentStudentNumbers) {
    do {
        printf("Phone number: (+84)");
        gets(ctemp);
        student[currentStudentNumbers].phoneNumber = atoi(ctemp);
    } while (student[currentStudentNumbers].phoneNumber == 0);
}


void address(studentInformation student[], int currentStudentNumbers) {
    printf("Address: ");
    gets(student[currentStudentNumbers].address);
}


void mathScore(studentInformation student[], int currentStudentNumbers) {
    printf("Math: ");
    gets(ctemp);
    student[currentStudentNumbers].score.math = atoi(ctemp);
}


void foreignLanguagesScore(studentInformation student[], int currentStudentNumbers) {
    printf("Languages: ");
    gets(ctemp);
    student[currentStudentNumbers].score.foreignLanguages = atoi(ctemp);
}


void literatureScore(studentInformation student[], int currentStudentNumbers) {
    printf("Literature: ");
    gets(ctemp);
    student[currentStudentNumbers].score.literature = atoi(ctemp);
}

//Write to file
void writeToFile(studentInformation student[], int currentStudentNumbers) {
    FILE *f;
    if ((f = fopen("Student list.csv", "w")) == NULL) {
        printf("Can not open file!\n");
        exit(0);
    }
    int i;
    for (i = 0; i < currentStudentNumbers - 1; i++) //The current number of students is at least 2 to execute the statement
        fprintf(f, "%s, %s, %d/%d/%d, %d, %s, %d, %d, %d\n", student[i].studentCode, student[i].name, student[i].dateOfBirth.date, student[i].dateOfBirth.month,
                student[i].dateOfBirth.year, student[i].phoneNumber, student[i].address, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);

    // write the last line without newline character
    if (currentStudentNumbers != 0) // to avoid loitering
        fprintf(f, "%s, %s, %d/%d/%d, %d, %s, %d, %d, %d", student[i].studentCode, student[i].name, student[i].dateOfBirth.date, student[i].dateOfBirth.month,
                student[i].dateOfBirth.year, student[i].phoneNumber, student[i].address, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);

    fclose(f);
}
//Read from file
int readFromFile(studentInformation student[], int  currentStudentNumbers) {
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
        currentStudentNumbers = 1;
        for (int i = 1; i < strlen(s); i++) {
            if (s[i] == ' ' && s[i - 1] == ',')
                s[i] = ',';
            if (s[i] == '\n')
                currentStudentNumbers = currentStudentNumbers + 1;
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
        for (int i = 0; i < currentStudentNumbers; i++)
            fprintf(f, "%s, %s, %d/%d/%d, %d, %s, %d, %d, %d\n", student[i].studentCode, student[i].name, student[i].dateOfBirth.date, student[i].dateOfBirth.month,
                student[i].dateOfBirth.year, student[i].phoneNumber, student[i].address, student[i].score.math, student[i].score.foreignLanguages, student[i].score.literature);

            printf("The number of students: %d\n", currentStudentNumbers);
    } //end if

    // check for overlapping
    for (int i=0; i< currentStudentNumbers - 1; i++) {
        for (int j=i+1; j< currentStudentNumbers; j++) {
            if (strcmpi(student[i].studentCode,student[j].studentCode)==0) {
                printf("The student code %s on line %d and line %d overlap\n",student[i].studentCode, i+1, j+1);
                yourChoice = 6; // thoat vong lap while
            } // end if
        } // end for
    } // end for



    fclose(f);

    return currentStudentNumbers;
}


