#include <stdio.h>


int playGame() {
    int num1, num2, num3;
    int sum, score = 0;

    while (score < 3) {
        printf("\nEnter three numbers (eyes closed!): ");
        scanf("%d %d %d", &num1, &num2, &num3);

        sum = num1 + num2 + num3;

        if (sum % 2 == 0) {
            score++;
            printf("Sum = %d (Even) → You get 1 point! Current score: %d\n", sum, score);
        } else {
            printf("Sum = %d (Odd) → You lost this round!\n", sum);
            break; 
        }
    }

    
    if (score == 3)
        return 1;
    else
        return 0;
}
int main() {
    int result;

    printf(" Welcome to the Even Sum Game!\n");
    printf("Get 3 even sums in a row to win!\n");

    result = playGame();

    if (result == 1)
        printf("\nLessgooooo You won! \n");
    else
        printf("\n You lost! Better luck next time.\n");

    return 0;
}
