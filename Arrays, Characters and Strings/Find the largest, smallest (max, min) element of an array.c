#include<stdio.h>

#define MAX 50

int max(int a[], int n);
int min(int a[], int n);
void clear_the_input_buffer();

int main () {
    int a[MAX];
    int n = 0;
    do {
        printf("Please enter the size of array (n <= %d): ", MAX);
        scanf("%d", &n);
        clear_the_input_buffer();
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        printf("Please enter the element number %d: ", i + 1);
        scanf("%d", &a[i]);
        clear_the_input_buffer();
    }
    printf("Max: %d\n", max(a, n));
    printf("Min: %d", min(a, n));
    return 0;
}

int max(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}

int min(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}

void clear_the_input_buffer() {
    while(1)
        if(getchar()=='\n')
            break;
}
