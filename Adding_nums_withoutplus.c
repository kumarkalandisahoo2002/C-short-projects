                                    //ADD TWO OPERANDS WITHOUT '+' OPERATOR

                                    //IDEA: using increment and decrement operators
#include <stdio.h>
int main(void)
{
    int num1,num2;
    printf("Enter first operand:\n");
    scanf("%d",&num1);

    printf("Enter second operand:\n");
    scanf("%d",&num2);

    if(num2 > 0)
    {
        while(num2 != 0)
        {
            num1++;
            num2--;
        }
        printf("The sum of two operand is:%d",num1);
    }
    else if(num2 < 0)
    {
        while(num2 != 0)
        {
            num1--;
            num2++;
        }
        printf("The sum of two operand is:%d",num1);
    }
    return 0;
}


