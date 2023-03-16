                                                //matrix division

//dividing any constant from  a matrix
#include <stdio.h>
#define MAX 50
int main(void)
{
    int arr[MAX][MAX],digit,i,j;

    //taking no. of rows & columns for matrix
    printf("Enter the no. of rows(i) & columns(j) of the matrix:\n");
    scanf("%d%d",&i,&j);

    //taking elements for the matrix
    printf("Enter the elements for matrix:\n");
    for(int a=0; a<i; a++)
    {
        for(int b=0; b<j; b++)
        scanf("%d",&arr[a][b]);
    }

    //printing matrix 
    printf("The matrix is:\n");
    for(int a=0; a<i; a++)
    {
        for(int b=0; b<j; b++)
        printf("%d\t",arr[a][b]);
        printf("\n");
    }

    //accepting the divider
    printf("Enter a divider:\n");
    scanf("%d",&digit);

    if(digit == 0)
    {
        printf("divider can not be zero(0).\n");
        goto L1;
    }
    else
    {
    int Rarr[MAX][MAX];

    //core logic implimentation
    for(int a=0; a<i; a++)
    {
        for(int b=0; b<j; b++)
        {
        int product=1;
        product *= arr[a][b]/digit;
        Rarr[a][b]=product;
        }
    }

    //printing resultant matrix
    printf("The resultant matrix is:\n");
    for(int a=0; a<i; a++)
    {
        for(int b=0; b<j; b++)
        printf("%d\t",Rarr[a][b]);
        printf("\n");
    }
    }
    
    
    L1 : printf("(hint : any thing divided by zero is infinite.))");
    return 0;
}