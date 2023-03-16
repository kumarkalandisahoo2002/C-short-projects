                // fibonacci series upto 20th term.
                
#include <stdio.h>
int main(void)
{
    int a=0,b=1,result,n=20,i=3;
    printf("%d\n",a);
    printf("%d\n",b);

    while (i<=n)
    {
        result=a+b;
        printf("%d\n",result);
        a=b;
        b=result;
        i++;
    }
    

    return 0;
}