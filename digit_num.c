#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 0;
    }

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    printf("Output: ");
    for (int i = 0; i < 3; i++) {
        switch (i) {
            case 0: digit = hundreds; break;
            case 1: digit = tens; break;
            case 2: digit = ones; break;
        }

        switch (digit) {
            case 0: printf("Zero"); break;
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }

        if (i < 2) printf(" ");
    }

    printf("\n");
    return 0;
}
