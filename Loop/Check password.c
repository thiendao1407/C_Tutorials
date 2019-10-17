#include <stdio.h>

#define PASSWORD 12345

int main() {
    int in;
    do {
        printf("Enter the password: ");
        scanf("%d", & in );
    } while (in != PASSWORD);
    return 0;
}
