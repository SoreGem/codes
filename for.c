#include <stdio.h>
int main () {
    int n, i;
    for(i=1; i<=10; i++){
        n = 5 * i;
        printf("5 * %d = %d\n", i, n);
    }
    return 0;
}