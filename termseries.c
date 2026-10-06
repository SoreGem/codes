#include <stdio.h>

int main() {
    int n, term;

    printf("Enter the position (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    if (n % 2 != 0) {
        term = (n - 1);
    } 

    else {
        term = (n - 2) / 2;
    }

    printf("The %dth term of the series is: %d\n", n, term);
    return 0;
}
