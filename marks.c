#include <stdio.h>
int main () {
    int sub1, sub2, sub3, avg;
    printf("Enter the marks of the three subjects out of 100 \n");
    scanf("%d%D%d", &sub1, &sub2, &sub3);
    avg = (sub1 + sub2 + sub3)*100/300;
    if (avg >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        printf ("Passed the exam\n");
    }
    else {
        printf ("You area a failiure\n");
    }
    return 0;
}