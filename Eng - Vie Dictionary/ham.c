#include "ham.h"

vocabulary *head = NULL;
vocabulary *current = NULL;
vocabulary *prev = NULL;


void add() {
    printf("Please enter the new word: ");
    gets(word);
    current = head;
    while (current != NULL) {
        if (strcmpi(current -> word, word) == 0) {
            printf("The word already exists");
            return;
        }

        current = current -> next;

    }
    printf("Please enter the meaning of the word: ");
    gets(meaning);

    vocabulary * link = (vocabulary * ) malloc(sizeof(vocabulary));
    link -> word = (char * ) malloc(sizeof(char) * (strlen(word) + 1)); // Remember to plus 1
    link -> meaning = (char * ) malloc(sizeof(char) * (strlen(meaning) + 1));

    strcpy(link -> word, word);
    strcpy(link -> meaning, meaning);

    //point it to old first node
    link -> next = head;

    //point first to new first node
    head = link;
}

void find_data() {

    if (head == NULL) {
        printf("Linked List not initialized");
        return;
    }
    int pos = 1;
    printf("Please enter the word you want to find: ");
    gets(word);

    current = head;
    while (current!= NULL) {
        if (strcmpi(current -> word, word) == 0) {
            printf("%d. %s: %s\n", pos, word, current -> meaning);
            return;
        }

        current = current -> next;
        pos++;
    }

    printf("%s does not exist in the list", word);
    return;
}

void update() {

    if (head == NULL) {
        printf("Linked List not initialized");
        return;
    }
    int pos = 1;
    printf("Please enter the word you want to update: ");
    gets(word);
    current = head;
    while (current != NULL) {
        if (strcmpi(current -> word, word) == 0) {
            printf("Please update the meaning of the word: ");
            gets(meaning);
            current -> meaning = realloc(current -> meaning, (sizeof(char) * (strlen(meaning) + 1)));
            strcpy(current -> meaning, meaning);

            printf("%s found at position %d, the updated meaning: %s\n", word, pos, current -> meaning);
            return;
        }

        current = current -> next;
        pos++;
    }

    printf("%s does not exist in the list", word);
    return;
}

void remove_data() {

    if (head == NULL) {
        printf("Linked List not initialized");
        return;
    }
    printf("Please enter the word you want to remove: ");
    gets(word);

    if (strcmpi(head -> word, word) == 0) {
        if (head -> next != NULL) {
            head = head -> next;
            printf("The word has been removed");
            return;
        } else {
            head = NULL;
            printf("List is empty now");
            return;
        }
    } else if (strcmpi(head -> word, word) != 0 && head -> next == NULL) {
        printf("%s not found in the list\n", word);
        return;
    }

    current = head;

    while (current -> next != NULL && strcmpi(current -> word, word) != 0) {
        prev = current;
        current = current -> next;
    }

    if (strcmpi(current -> word, word) == 0) {
        prev -> next = prev -> next -> next;
        free(current);
        printf("The word has been removed");
    } else
        printf("%s not found in the list.", word);

}

//display the list
void print_list() {
    int barrier = 11;
    while (1) {
        int pos;
        if (head == NULL) {
            printf("Linked List not initialized");
            return;
        }

        current = head;
        pos = 1;
        while (current != NULL && pos < barrier) {
            if (pos >= barrier - 10)
                printf("%d. %s: %s\n", pos, current -> word, current -> meaning);
            current = current -> next;
            pos++;
        }
        int yourchoice = 0;
        do {
            printf("\n1. Next / 2. Previous / 3. Exit => ");
            gets(ctemp);
            yourchoice = atoi(ctemp);
        } while (yourchoice < 1 && yourchoice > 3);
        if (yourchoice == 1) {
            if (current == NULL) {
                printf("End of list");
                break;
            } else barrier = barrier + 10;
        } else if (yourchoice == 2) {
            if (barrier > 11)
                barrier = barrier - 10;
            else {
                printf("Top of list");
                break;
            }
        } else if (yourchoice == 3)
            return;

    }
}

void export_list() {
    FILE *f;
    if ((f = fopen("dictionary.csv", "w")) == NULL) {
        printf("Can not open file!\n");
        exit(0);
    }
    current = head;

    //start from the beginning
    while (current -> next != NULL) {
        fprintf(f, "%s_%s\n", current -> word, current -> meaning);
        current = current -> next;
    }
    // export the last link without enter
    fprintf(f, "%s_%s", current -> word, current -> meaning);

    fclose(f);
}

void import_file() {
    FILE * f;
    char * tokenPtr;

    f = fopen("dictionary.csv", "r");
    if (f == NULL) {
        printf("Can not open file!\n");
        exit(0);
    } else {
        fseek(f, 0, 2);
        char * s = (char * ) malloc(sizeof(char) * (ftell(f) + 1)); //count the length of string s, use dynamic allocate
        rewind(f); // f pointer will point at the beginning of the file
        fscanf(f, "%[^EOF]", s); // read file into string s, ignore EOF character

        if (strlen(s) > 1) {
            int icount = 0;
            tokenPtr = strtok(s, "_\n"); // remove _ and \n
            while (tokenPtr != NULL) {
                switch (icount % 2) {
                case 0:
                    strcpy(word, tokenPtr);
                    break;
                case 1:
                    strcpy(meaning, tokenPtr);
                    vocabulary * link = (vocabulary * ) malloc(sizeof(vocabulary));
                    link -> word = (char * ) malloc(sizeof(char) * (strlen(word) + 1)); //Remember to plus 1
                    link -> meaning = (char * ) malloc(sizeof(char) * (strlen(meaning) + 1));

                    strcpy(link -> word, word);
                    strcpy(link -> meaning, meaning);

                    //point it to old first node
                    link -> next = head;

                    //point first to new first node
                    head = link;
                    break;
                } //end switch
                icount++;
                tokenPtr = strtok(NULL, "_\n");
            } // end while

            free(s); // free memory location

            // print the list
            current = head; //start from the beginning
            int pos = 1;
            while (current != NULL) {
                printf("%d. %s: %s\n", pos, current -> word, current -> meaning);
                current = current -> next;
                pos++;
            }
        } //end if
    } //end else

    fclose(f);
}
