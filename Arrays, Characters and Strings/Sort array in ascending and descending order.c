#include<stdio.h>

#define MAX 50

void ascending_sort(int a[], int n);
void descending_sort(int a[], int n);

int main () {
    int a[MAX];
    int n = 0;
    do {
        printf("Please enter the size of array (n <= %d): ", MAX);
        scanf("%d", &n);
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        printf("Please enter the element number %d: ", i + 1);
        scanf("%d", & a[i]);
    }

    printf("The original array is:\n");
    for (int i = 0; i < n; i++)
        printf("%2d", a[i]);

    ascending_sort(a, n);
    descending_sort(a, n);

    return 0;
}

void ascending_sort(int a[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (a[i] > a[j]) {
                int itemp = a[i];
                a[i] = a[j];
                a[j] = itemp;
            }
    printf("\nElements of array in ascending order:\n");
    for (int i = 0; i < n; i++)
        printf("%2d", a[i]);
    printf("\n");
}

void descending_sort(int a[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (a[i] < a[j]) {
                int itemp = a[i];
                a[i] = a[j];
                a[j] = itemp;
            }
    printf("\nElements of array in descending order:\n");
    for (int i = 0; i < n; i++)
        printf("%2d", a[i]);
    printf("\n");
}
