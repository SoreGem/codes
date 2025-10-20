#include <stdio.h>


int main() {
    int a=1, sum=0;
    while (a <= 10) {
     printf("%d + %d = %d\n", a, sum, a + sum);
     sum +=a;
     a++;
    }
    return 0;
}