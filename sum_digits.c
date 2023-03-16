//sum of all the digits of a given number
#include <stdio.h>
int main(void)
{
    int num,q,rem,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    q=num;
    while (q!=0)
    {
        rem=q%10;
        sum=sum+rem;
        q=q/10;
    }
    printf("The sum of all digits is:%d",sum);
    
    return 0;
}