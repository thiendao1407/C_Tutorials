#include "ham.h"

int main() {
    int yourchoice = 0;

    import_file();
    while (yourchoice != 6) {
        printf("\n----------------------------");
        printf("\n1. Add\n\n2. Find\n\n3. Update\n\n4. Remove\n\n5. Print\n\n6. Exit\n");
        printf("----------------------------\n");
        printf("\nPlease select an option: ");
        gets(ctemp);
        yourchoice = atoi(ctemp);
        switch (yourchoice) {
        case 1:
            add();
            yourchoice = 0;
            break;
        case 2:
            find_data();
            yourchoice = 0;
            break;
        case 3:
            update();
            yourchoice = 0;
            break;
        case 4:
            remove_data();
            yourchoice = 0;
            break;
        case 5:
            print_list();
            yourchoice = 0;
            break;
        } // end switch
    } // end while
    yourchoice = 0;
    export_list();
    return 0;
}
