//CODE FOR SPY NUMBERS : a number is said to be spy if the sum of all the digits is equal to the product of all the digits.
#include <stdio.h>
int main(void)
{
    int n,sum=0,prod=1;
    int d;

    printf("Enter the number");
    scanf("%d",&n);

    while (n>0)
    {
        d=n%10;
        sum=sum+d;
        prod=prod*d;
        n=n/10;
    }
    if (sum==prod)
        printf("Given number is spy number.");
    else
        printf("Given number is not spy number.");
    
    return 0;
}