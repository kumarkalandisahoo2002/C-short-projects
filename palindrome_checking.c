//checking a number is palindrome or not.
#include <stdio.h>
int main(void)
{
    int result=0,num,rem,q;
    printf("Enter a number:\n");
    scanf("%d",&num);

    q=num;
    while (q!=0)
    {
        rem=q%10;
        result=(result*10)+rem;
        q=q/10;
    }
    if (result==num)
        printf("This number %d is a palindrome.",num);
    else
        printf("This number %d is not a palindrome.",num);
   
    return 0;
}

