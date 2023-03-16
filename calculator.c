//designing a calculater.

#include <stdio.h>
int main(void)
{
    char operator;
    int num1,num2; 

    printf("choose your operator(+,-,*,/,%):");
    scanf("%c",&operator);
        printf("\n"); 
    printf("Enter your first operand:");
    scanf("%d",&num1);
        printf("\n");
    printf("Enter your second operand:");
    scanf("%d",&num2);

        switch (operator)
        {
        case '+':
            printf("SUM(%d + %d) = %d",num1,num2,num1+num2);
            break;
        case '-':
            printf("SUBSTRACTION(%d - %d) = %d",num1,num2,num1-num2);
            break;
        case '*' :
            printf("MULTIPLICATION(%d * %d) = %d",num1,num2,num1*num2);
            break;
        case '/' :
            printf("DIVISION(%d / %d) = %d",num1,num2,num1/num2);
            break;
        case '%' :
            printf("MODULUS(%d % %%d) = %d",num1,num2,num1%num2);
            break;
        default:
            printf("Choose a correct operator!\a");
            break;
        }
    return 0;
}