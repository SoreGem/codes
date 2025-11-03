#include <stdio.h>
int main ()
{
    int x;
float a;

printf("Enter the sallery:\n");

scanf("%d", &x);

if (x>50000){

a= x + (0.3*x) + (0.15*x);

printf("Gross Sallery:\n %f", a);

}
else if ( x <= 50000 || x>0)
{

    a = x + (0.2*x) + (0.1*x);

    printf("Gross Sallery:\n %f", a);

}
else {

    printf("Invalid input");

}

 return 0;
}