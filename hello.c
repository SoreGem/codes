#include <stdio.h>

int main () {
    int i=1,n,t;
    printf("Enter the no you want to print table of:");
    scanf("%d", &n);
    while(i<=10)
    {
        t=n*i;
        printf("%d*%d=%d\n",n,i,t);
        i++;
    }
    return 0;
}