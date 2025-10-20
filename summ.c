/*#include <stdio.h>
int main() {
    int i,n,s=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
        printf("%d\n",s);
    
    return 0;
}*/
#include <stdio.h>
int main() {
    printf("Enter the number to get sum of even numbers upto that number:\n");
    int i,n,s=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            s=s+i;
        }
    }
        printf("The sum of even numbers upto %d is %d\n",n,s);
        return 0;
}