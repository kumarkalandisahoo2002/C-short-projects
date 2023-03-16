//finding roots of quadratic equation

#include <stdio.h>
#include<math.h>
int main(void)
{
    int A,B,C,deno;
    float disc,a1,a2,b1,b2,c1,c2;

    //taking the value of A
    printf("Enter the value of A::\n");
    scanf("%d",&A);

    //taking the value of B
    printf("Enter the value of B::\n");
    scanf("%d",&B);

    //taking the value of C
    printf("Enter the value of C::\n");
    scanf("%d",&C);

    //core logic implimentation
    // nature of the roots depends on b^2-4ac
    disc=(B*B)-(4*A*C);
    deno=2*A;

    if (disc > 0)
    {
        printf("The roots are real & distinct.\n");
        a1= (-B/deno)+(sqrt(disc)/deno);
        a2= (-B/deno)-(sqrt(disc)/deno);
        printf("The roots are : %f & %f",a1,a2);
    }
    else if (disc = 0)
    {
        printf("The roots are real & equal.\n");
        b1= (-B/deno)+(sqrt(disc)/deno);
        b2= (-B/deno)-(sqrt(disc)/deno);
        printf("The roots are : %f & %f",b1,b2);
    }
    else if (disc < 0)
    {
        printf("The roots are conjugative & complex.\n");
        c1= (-B/deno)+(sqrt(disc)/deno);
        c2= (-B/deno)-(sqrt(disc)/deno);
        printf("The roots are : %f & %f",c1,c2);
    }


    return 0;
}