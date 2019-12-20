#include "functions.h"

vocabulary * add(vocabulary *head) {
    printf("Please enter the new word: ");
    gets(word);

    // Check if the word already exists
    vocabulary *current = head;
    while (current != NULL) {
        if (strcmpi(current -> word, word) == 0) {
            printf("The word already exists");
            return head;;
        }
        current = current -> next;
    }

    printf("Please enter the meaning of the word: ");
    gets(meaning);

    vocabulary * link = (vocabulary * ) malloc(sizeof(vocabulary));
    link -> word = (char * ) malloc(sizeof(char) * (strlen(word) + 1)); // Remember to plus 1
    link -> meaning = (char * ) malloc(sizeof(char) * (strlen(meaning) + 1));
    link -> next = NULL;

    strcpy(link -> word, word);
    strcpy(link -> meaning, meaning);

    //point it to old first node
    link->next = head;

    //point first to new first node
    head = link;

    return head;;
}

void find_data(vocabulary *head) {

    if (head == NULL) {
        printf("Linked List not initialized");
        return;
    }

    int icount = 1;
    printf("Please enter the word you want to find: ");
    gets(word);
    vocabulary *current = head;

    while (current!= NULL) {
        if (strcmpi(current -> word, word) == 0) {
            printf("%d. %s: %s\n", icount, word, current -> meaning);
            return;
        }
        current = current -> next;
        icount++;
    }
    printf("%s does not exist in the list", word);
    return;
}

void update(vocabulary *head) {

    if (head == NULL) {
        printf("Linked List not initialized");
        return;
    }

    int icount = 1;
    printf("Please enter the word you want to update: ");
    gets(word);
    vocabulary *current = head;

    while (current != NULL) {
        if (strcmpi(current -> word, word) == 0) {
            printf("Please update the meaning of the word: ");
            gets(meaning);
            current -> meaning = realloc(current -> meaning, (sizeof(char) * (strlen(meaning) + 1)));
            strcpy(current -> meaning, meaning);

            printf("%s found at position %d, the updated meaning: %s\n", word, icount, current -> meaning);
            return;
        }

        current = current -> next;
        icount++;
    }

    printf("%s does not exist in the list", word);
    return;
}

vocabulary * remove_data(vocabulary *head) {

    if (head == NULL) {
        printf("Linked List not initialized");
        return head;
    }
    printf("Please enter the word you want to remove: ");
    gets(word);

    if (strcmpi(head -> word, word) == 0) {
        if (head -> next != NULL) {
            head = head -> next;
            printf("The word has been removed");
            return head;;
        } else {
            head = NULL;
            printf("List is empty now");
            return head;
        }
    } else if (strcmpi(head -> word, word) != 0 && head -> next == NULL) {
        printf("%s not found in the list\n", word);
        return head;;
    }

    vocabulary *current = head;
    vocabulary *prev = NULL;

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

    return head;;
}

//display the list
void print_list(vocabulary *head) {

    int barrier = 11;
    while (1) {
        int icount = 0;
        if (head == NULL) {
            printf("Linked List not initialized");
            return;
        }

        vocabulary *current = head;
        icount = 1;
        while (current != NULL && icount < barrier) {
            if (icount >= barrier - 10)
                printf("%d. %s: %s\n", icount, current -> word, current -> meaning);
            current = current -> next;
            icount++;
        }

        int yourchoice = 0;

        do {
            printf("\n1. Previous / 2. Next / 3. Exit => ");
            gets(ctemp);
            yourchoice = atoi(ctemp);
        } while (yourchoice < 1 && yourchoice > 3);

        if (yourchoice == 2) {
            if (current == NULL) {
                printf("End of list");
                break;
            } else
                barrier = barrier + 10;
        } else if (yourchoice == 1) {
            if (barrier > 11)
                barrier = barrier - 10;
            else {
                printf("Top of list");
                break;
            }
        } else if (yourchoice == 3)
            return;
    } // end while
}

void export_list (vocabulary *head) {
    FILE *f;
    if ((f = fopen("dictionary.csv", "w")) == NULL) {
        printf("Can not open file!\n");
        exit(0);
    }

    vocabulary *current = head;
    //start from the beginning
    while (current -> next != NULL) {
        fprintf(f, "%s_%s\n", current -> word, current -> meaning);
        current = current -> next;
    }
    // export the last link without enter
    fprintf(f, "%s_%s", current -> word, current -> meaning);
    fclose(f);
    return;
}

vocabulary * import_file(vocabulary *head) {
    FILE * f = fopen("dictionary.csv", "r");
    if (f == NULL) {
        printf("Can not open file!\n");
        exit(0);
    }

    int icount = 0;

    // create string s to read file
    fseek(f, 0, 2);
    char * s = (char * ) malloc(sizeof(char) * (ftell(f)+1)); //count the length of string s, use dynamic allocate
    rewind(f); // f pointer will point at the beginning of the file
    // read file into string s
    int c;
    while ((c = fgetc(f)) != EOF) {
        *(s + icount) = c;
        icount++;
    }
    *(s + icount) = '\0';

    if (strlen(s) > 1) {
        icount = 0;
        char * tokenPtr = strtok(s, "_\n"); // remove _ and \n
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
                link->next = NULL;

                strcpy(link -> word, word);
                strcpy(link -> meaning, meaning);

                // If head is empty, create new list
                if(head==NULL) {
                    head = link;
                    break;
                }

                // move to the end of the list
                vocabulary *current = head;
                while(current->next!=NULL)
                    current = current->next;

                // Insert link at the end of the list
                current->next = link;
                break;
            } //end switch

            icount++;
            tokenPtr = strtok(NULL, "_\n");
        } // end while
    } // end if (strlen(s) > 1)

    free(s); // free memory location

    // print the list
    vocabulary *current = head; //start from the beginning
    icount = 1;
    while (current != NULL) {
        printf("%d. %s: %s\n", icount, current -> word, current -> meaning);
        current = current -> next;
        icount++;
    }
    fclose(f);
    return head;
}
