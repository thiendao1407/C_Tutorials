#include "ham.h"

int main() {
    int yourchoice = 0;
    vocabulary * head = NULL;
    head = import_file(head);
    while (yourchoice != 6) {
        printf("\n----------------------------");
        printf("\n1. Add\n\n2. Find\n\n3. Update\n\n4. Remove\n\n5. Print\n\n6. Exit\n");
        printf("----------------------------\n");
        printf("\nPlease select an option: ");
        gets(ctemp);
        yourchoice = atoi(ctemp);
        switch (yourchoice) {
        case 1:
            head = add(head);
            yourchoice = 0;
            break;
        case 2:
            find_data(head);
            yourchoice = 0;
            break;
        case 3:
            update(head);
            yourchoice = 0;
            break;
        case 4:
            head = remove_data(head);
            yourchoice = 0;
            break;
        case 5:
            print_list(head);
            yourchoice = 0;
            break;
        } // end switch
    } // end while
    yourchoice = 0;
    export_list(head);
    return 0;
}
