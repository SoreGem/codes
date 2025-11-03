
  #include <stdio.h>
int main()
{
    int x,fn;
    printf("Enter the value of x:\n");
    scanf("%d", &x);
    if(x>0 && x<=10){
        fn=(x*x)+2;
        printf("The value of fn is:\n%d ", fn);
    }
    else if (x>=11 && x <= 20){
        fn= (x*x)+2*x;
        printf("The value of fn is:\n%d ", fn);
    }
    else if (x>=21 && x<=30){
        fn = (x*x*x)+(2*x*2);
         printf("The value of fn is:\n%d ", fn);
    }
    else if (x>30){
        fn = 0;
         printf("The value of fn is:\n%d ", fn);
    }
      else {
        printf("Invalid input");
    }
    return 0;
}