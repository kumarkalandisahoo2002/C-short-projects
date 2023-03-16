#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num1, num2;

    printf("Enter the number you want to create multiplication table:\n\n");
    scanf("%d", &num1);

    printf("the multiplication table of %d is :\n", num1);

    for (num2 = 1; num2 <= 10; num2++)
    {
        printf("\t%d*%d=%d\n", num1, num2,num1*num2);
    }

    return 0;
}
