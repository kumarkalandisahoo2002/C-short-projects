//IDEA: using Half adder logic

#include <stdio.h>
int main(void)
{
    int sum,carry,a,b;
    printf("Enter two operands a & b:\n");
    scanf("%d%d",&a,&b);

    while(b!=0)
    {
        sum=a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }
    printf("The sum of two operands is :%d",sum);

    return 0;
}