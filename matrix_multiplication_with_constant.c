                    //Multiplying a constant value with a matrix
#include <stdio.h>
#define MAX 50
int main(void)
{
    int arr[MAX][MAX],digit,i,j;

    //accepting the multiplier
    printf("Enter a multiplier:\n");
    scanf("%d",&digit);

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

    int Rarr[MAX][MAX];
    //core logic implimentation
    for(int a=0; a<i; a++)
    {
        for(int b=0; b<j; b++)
        {
        int product=1;
        product *= digit * arr[a][b];
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
    
    return 0;
}
