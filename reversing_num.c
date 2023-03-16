//REVERSE THE NUMBER
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
        printf("\n");
    int q,r,result=0;
    q=num; //num=123
    while (q != 0)
    {
        r=q%10; //r=3   2   1
        result=10*result+r; //result=3  32  321
        q=q/10; //q=12  1   0

    }
    printf("The reverse of given number is :%d",result);


                        //WITHOUT USING LOOP : REVERSE THE NUMBER (3 digits number)

            // int num;
            // printf("Enter a number:\n");
            // scanf("%d", &num);
            //      printf("\n");

            // int q,r1,r2,r3,reverse;
            // q=num; //num=124

            // r1=q%10; //r1=4
            // q=q/10; //q=12
            // r2=q%10; //r2=2
            // q=q/10; //q=1
            // r3=q%10; //r3=1
            // q=q/10; //q=0

            // reverse=100*r1+10*r2+1*r3;
            // printf("The reverse number is : %d",reverse);
    return 0;
}