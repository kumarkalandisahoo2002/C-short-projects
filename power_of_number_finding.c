//WAP to calculate x to the power y using loop    = x*x*x....y times
#include <stdio.h>
int main(void)
{
    int x,y,i,result=1;
    printf("Enter the value of x & y:\n");
    scanf("%d%d",&x,&y);

    for(i=1;i<=y;i++)
    {
        result=result*x;
    }
    printf("%d to the power %d is: %d",x,y,result);
    return 0;
}