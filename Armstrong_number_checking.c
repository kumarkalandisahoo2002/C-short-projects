//checking a number is armstrong or not.

#include <stdio.h>
int main(void)
{
    int num,i,count=0,rem,q,result,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    q=num;                                     
      while(q!=0)
    {
        q=q/10;
        count++;
    };
    q=num;                                          
    while (q!=0)
    {
        rem=q%10;
        result=1;
        for ( i = 1; i <= count; i++)
        {
            result=result*rem;
        };
        sum=sum+result;  //result=sum= 27(1st iteration)
        q=q/10; //q=15 (1st iteration)
    };
    if (sum==num)
    printf("This number is an armstrong number.");
    else
    printf("This is not an armstrong number.");

    return 0;
}
