//multiply two numbers using plus operators     
#include <stdio.h>
 
int main(void)
{
    int num,x;

    //taking a number
    printf("Enter a number :\n");
    scanf("%d",&num);

    //taking a multiplier to multiply
    printf("Enter the multiplier:\n");
    scanf("%d",&x);

    //core logic implimentation
        int sum=0;
        for (int i = 0; i < x; i++)
            {
                sum += num;
            }

        //printig results
        printf("%d * %d = ",num,x);
        for (int i = 0; i < x-1; i++)
            {
                printf("%d + ",num);
            }

        printf("%d",num);

        printf(" = %d",sum);
 
    return 0;
}