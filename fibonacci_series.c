//fibonacci series upto nth term

#include<stdio.h>
int main(void)
{
    int a,b,result,n,i;
    printf("Enter the nth term:\n");
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a);
        result=a+b;
        a=b;
        b=result;
    }
    return 0;
}


