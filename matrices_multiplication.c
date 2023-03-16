// //matrix multiplication 
//                         // first programme :: multiplying a matrix with another matrix
#include <stdio.h>
#define MAX 50
int main(void)
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum=0;

    //accepting the no. of rows & columns in matrix a
    printf("Enter the rows and columns of matrix a:\n");
    scanf("%d%d",&arows,&acolumns);

    //accepting elements for matrix a
    printf("Enter the elements of matrix a:\n");
    for (i = 0; i < arows; i++)
    {
        for(j=0; j<acolumns; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //printing matrix a
    printf("The matrix a is:\n");
    for (i = 0; i < arows; i++)
    {
        for(j=0; j<acolumns; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    //accepting the no. of rows & columns in matrix b
    printf("Enter the rows and columns of matrix b:\n");
    scanf("%d%d",&brows,&bcolumns);
    
    if (brows!=acolumns)
    {
        printf("sorry! We cannot multiply the matrices a & b.\n");
        goto L1;
    }
    else
    {
        //accepting elements for matrix b
        printf("Enter the elements of matrix b:\n");
        for ( i = 0; i < brows; i++)
        {
            for(j=0; j<bcolumns; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }      
    }
    
    //printing matrix b
    printf("The matrix b is:\n");
    for ( i = 0; i < brows; i++)
    {
        for(j=0; j<bcolumns; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    } 
    printf("\n");

    //core logic for matrix multiplication
    for ( i = 0; i < arows; i++)
    {
        for ( j = 0; j < bcolumns; j++)
        {
            for ( k = 0; k < acolumns; k++)
            {
                sum += a[i][k]*b[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }       
    }
    
    //printing resultant matrix
    printf("The resultant matrix is:\n");
    for ( i = 0; i < arows; i++)
    {
        for ( j = 0; j < bcolumns; j++)
        {
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
    
    L1: printf("(Hint : acolumns = brows)");
    return 0;
}



