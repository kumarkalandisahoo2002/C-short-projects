//checking a number is prime or not

#include <stdio.h>
int main(void)
{
    int n,i,flag=0,m;
    printf("Enter a number to check is it prime or not:\n");
    scanf("%d",&n);

    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("Number is not prime.");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Number is prime.");
    }
    return 0;
}
