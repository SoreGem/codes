#include<stdio.h>
int main(){
    int p,q,i,j,isprime;
    printf("Enter the range p and q:\n");
    scanf("%d,%d", &p, &q);
    printf("Prime no bwtween %d and %d are:", p,q);

    for(i=p;i<=q;i++)
    {
        if(i<2)
        continue;
        isprime = 1;
        for (j=2;j*j<=i;j++)
        {
            if (i%j == 0)
            isprime=0;
            break;
        }
    }
    if (isprime)
    printf("%d",i);

    return 0;
}