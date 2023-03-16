//ALL SUNNY NUMBERS BETWEEN 1 TO N.
#include <stdio.h>
#include<math.h>
int main(void)
{
    int limit,i;
    double x;//sqrt(num=1)
    printf("Enter a number(upper limit):");
    scanf("%d",&limit);
    printf("Sunny numbers between 1 & %d\n",limit);
    for (i = 1; i <= limit; i++)
    {
        x=sqrt(i+1);
        if ((int)x==x)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}