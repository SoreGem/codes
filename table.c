#include <stdio.h>
int main() {
    int a=10, n=11;
    while (n--){
        printf("%d * %d = %d\n", a, n, a*n);
        if (n==1) {
            break;
        }
    }
    return 0;
}