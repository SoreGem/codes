#include <stdio.h>
int main() {
    char a ;
    printf("Enter the charechter to know its data type");
    scanf("%c",&a);
    if(a >= 'a' && 'z' <= 'z'){
        printf("it is a lower case alphabet");
    }
    else if(a >= 'A' && 'Z' <= 'Z'){
        printf("it is an upper case alphabet");
    }
    else if(a >= '0' && a <= '9'){
        printf("it is a digit");
    }
    else{
        printf("it is a special symbol");
    }
    return 0;
}