#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, in, max, min;
    printf("Please enter the number of integers: ");
    scanf("%d", &in);
    int *a = (int *) malloc (sizeof(int) * in); // or you can declare "int a[50]" instead

    for (i = 1; i <= in ; i++) {
        printf("Number a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    max = a[1];
    for (i = 1; i <= in ; i++)
        if (a[i] > max)
            max = a[i];
    printf("The largest: %d\n", max);

    min = a[1];
    for (i = 1; i <= in ; i++)
        if (a[i] < min)
            min = a[i];
    printf("The smallest: %d\n", min);

    free(a);
    return 0;
}
