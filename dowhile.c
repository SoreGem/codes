#include <stdio.h>
int main () {
    int i=1,n,t;
    printf ("Enter the number you want a table of:\n");
    scanf ("%d",&n);
    do{
        n=t*i;
        printf("5*%d=%d\n",i,n);
        i++;
    }
    while (i<=10);
    return 0;
}