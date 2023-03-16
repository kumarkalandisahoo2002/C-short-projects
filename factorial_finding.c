//finding factorial of a given number.
#include <stdio.h>
int factorial(int number)
{
    if (number==0 || number==1)     
        return 1;
    if(number>1)
        return number*factorial(number-1);
};
int main(void)
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);

    printf("The factorial of %d is : %d",num,factorial(num));

    return 0;
}
