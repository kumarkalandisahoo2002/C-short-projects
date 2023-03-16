//APPLICATION OF ALL BITWISE OPERATORS
#include <stdio.h>
void showbits(int n)
{
    int i,k,andmask;
    for ( i = 8; i >= 0; i--)
    {
        andmask= 1<<i;
        k=n & andmask;
        k==0? printf("\t0") : printf("\t1");
    };  
}

int main(void)
{
    int x,y,z1,z2,z3,z4,z5,z6;
    printf("Enter two numbers :\n");
    scanf("%d%d",&x,&y);

    showbits(x);
        printf("\n");
    showbits(y);
    z1=x&y;
    z2=x|y;
    z3=x^y;
    z4=x<<2;
    z5=x>>2;
    z6=~x;
        printf("\n");
    printf("\nafter 'AND' operator:\n");
    showbits(z1);
        printf("\ndecimal form:%d",z1);
        printf("\nhexa form:%x",z1);
        printf("\noctal form:%o",z1);
        printf("\n");

        printf("\nafter 'OR' operator:\n");
    showbits(z2);
        printf("\ndecimal form:%d",z2);
        printf("\nhexa form:%x",z2);
        printf("\noctal form:%o",z2);
        printf("\n");

        printf("\nafter 'XOR' operator:\n");
    showbits(z3);
        printf("\ndecimal form:%d",z3);
        printf("\nhexa form:%x",z3);
        printf("\noctal form:%o",z3);
        printf("\n");

        printf("\nafter 'LEFT-SHIFT' operator:\n");
    showbits(z4);
        printf("\ndecimal form:%d",z4);
        printf("\nhexa form:%x",z4);
        printf("\noctal form:%o",z4);
        printf("\n");

        printf("\nafter 'RIGHT-SHIFT' operator:\n");
    showbits(z5);
        printf("\ndecimal form:%d",z5);
        printf("\nhexa form:%x",z5);
        printf("\noctal form:%o",z5);
        printf("\n");

        printf("\nafter 'COMPLIMENT' operator:\n");
    showbits(z6);
        printf("\ndecimal form:%d",z6);
        printf("\nhexa form:%x",z6);
        printf("\noctal form:%o",z6);
        printf("\n");

   


    return 0;
}