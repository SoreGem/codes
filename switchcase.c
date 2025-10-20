#include <stdio.h>
int main() {
    int ch;
    float a,b;
    printf("Enter the choice\n 1 for addition\n 2 for substraction \n 3 for multiplication\n 4 for division ");
    scanf("%d"&ch);
    printf(Enter 2 mumbers to perform the operation);
    scanf("%f%f" &a,&b);
    switch(ch){
        case 1 : printf("Result = %.2f", a+b);
        break;
        case 2 : printf("Result = %.2f", a-b);
        break;
        case 3: printf("Result = %.2f", a*b);
        break;
        case 4 : b=!0? printf("Result = %.2f", a/b); : printf("Division by 0 is not allowed");
        break;
        default: printf (" Invalid Choice");
    }
    return 0;
}