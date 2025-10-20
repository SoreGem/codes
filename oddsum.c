#include <stdio.h>
int main() {
    printf("Enter the number to get sum of odd numbers upto that number:\n");
    int i,n,s=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            s=s+i;
        }
    }
        printf("The sum of odd numbers upto %d is %d\n",n,s);
        return 0;
}