/*   C program to find HCF(highest common factor) of two numbers  */

#include <stdio.h>

//function to find HCF of two number
int findHcf(int a,int b)
{
    int temp;

    if(a==0)
    return b;
    if(b==0)
    return a;
    while(b!=0)
    {
        temp = a%b;
        a    = b;
        b    = temp;
    }
    return a;
}

int main(void)
{
    int a,b;
    int hcf;

    printf("Enter first number :: ");
    scanf("%d",&a);
    printf("\nEnter second number :: ");
    scanf("%d",&b);

    hcf=findHcf(a,b);
    printf("\nHCF (Highest Common Factor) of %d & %d is: %d\n",a,b,hcf);

    return 0;
}