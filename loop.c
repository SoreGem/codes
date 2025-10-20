#include <stdio.h>
void sub (int a, int b){
    printf("Substraction of %d and %d is %d\n", a, b, a - b);
}
int main() {
    int n;
    printf("Enter the number of substractions you want to perform:\n");
    scanf("%d", &n);
    while (n--) {
        int a, b;
        printf("Enter two integers:\n");
        scanf("%d %d", &a, &b);
        sub(a, b);
    }
    printf("Here is the result.");
    return 0;
}