#include<stdio.h>

int say_numbers(char s[][5], int n);

int main() {
    int n;
    char s[9][5] = {"mot","hai","ba","bon","nam","sau","bay","tam","chin"};
    do {
        printf("Please enter a number: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 999);

    say_numbers(s, n);

    return 0;
}

int say_numbers(char s[][5], int n) { // Recursive function
    int t, c, d;
    t = n / 100, c = (n % 100) / 10, d = n % 10;

    if (n < 10) {
        printf("%s", s[d - 1]);
        return 0;
    }
    if (n < 20) {
        if (d != 5)
            printf("muoi` %s", s[d - 1]);
        else
            printf("muoi` lam");
        return 0;
    }
    if (n < 100) {
        if (d != 5)
            printf("%s muoi %s", s[c - 1], s[d - 1]);
        else
            printf("%s muoi lam", s[c - 1]);
        return 0;
    }
    if (n > 100) {
        printf("%s tram ", s[t - 1]);
        n -= 100 * t;
        if (n < 10)
            printf("le ");
    }
    return say_numbers(s, n);
}
