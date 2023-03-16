//binary to decimal conversion

#include <stdio.h>

int main(void)
{
    int binary;
    printf("Enter a binary number:\n");
    scanf("%d",&binary);

    int rem;
    int decimal=0, weight=1;
    while (binary!=0)
    {
        rem = binary%10;
        decimal += rem*weight;
        weight *= 2;
        binary = binary/10;
    }
    printf("The decimal value of %d is: %d",binary,decimal);
    return 0;
}