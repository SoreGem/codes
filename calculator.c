#include <stdio.h>
int main(){
    int ch;
    float r,l,b,h,area,base;
    printf("Enter 1 for area of circle 2 for area of rectangle 3 for area of triangle");
        scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("Enter radius of circle");
            scanf("%f",&r);
            area = 3.14*r*r;
            printf("Area of circle id %f",area);
            break;
            case 2: 
            printf("Enter length and breadth of rectangle");
            scanf("%f%f",&l,&b);
            area = l*b;
            printf("Area of rectangle is %f",area);
            break;
            case 3:
            printf("Enter base and height of triangle");
            scanf("%f%f",&base,&h);
            area = 0.5*base*h;
            printf("Area of triangle is %f",area);
            break;
            default:
            printf("Invalid input");
    }
   return 0;
}