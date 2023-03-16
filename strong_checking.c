#include <stdio.h>
int main(void)
{
    int num,q,sum=0,rem,fact;
    printf("Enter a number:\n");
    scanf("%d",&num);
    q=num;
    while(q!=0)
    {
        rem=q%10;
        fact=1;
        while(rem!=0)
        {
            fact=fact*rem;
            rem--;
        }
        sum=sum+fact;
        q=q/10;
    }
    q=num;
    if(q==0)
    {
        sum=1;
    }
    printf("The sum is:%d\n",sum);
    if(sum==num)
    printf("%d is a strong number.",num);
    else
    printf("%d is not a strong number.",num);


    return 0;
}