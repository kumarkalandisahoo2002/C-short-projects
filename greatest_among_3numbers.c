//finding greatest among three numbers

#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter three numbers a,b & c:\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        printf("a=%d is the greatest number among all three",a);
        else
        printf("c=%d is the greatest number among all three",c);
    }
    else
    {
        if(b>c)
        printf("b=%d is the greatest number among all three",b);
        else
        printf("c=%d is the greatest number among all three",c);
    }

    return 0;
}