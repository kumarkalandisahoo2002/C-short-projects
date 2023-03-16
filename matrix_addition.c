//matrix addition

#include<stdio.h>
#define MAX 50 
int main(void)
{    
    int i,j;
    int a,b,Xarr[MAX][MAX],Yarr[MAX][MAX];

    //accepting the value of i & j
    printf("Enter the number of Rows(i) & columns(j):\n");
    scanf("%d%d",&i,&j);

    //accepting elements for matrix X
    printf("Enter the elements of matrix X:\n");
    for( a = 0; a < i; a++)
    {
        for( b = 0; b < j; b++)
        {
            scanf("%d",&Xarr[a][b]);
        }
    }

    //displaying matrix X
    printf("The matrix X is:\n");
    for(a = 0; a < i; a++)
    {
        for(b=0; b < j; b++)
        {
            printf("%d\t",Xarr[a][b]);
        }
        printf("\n");
    }


    //accepting elements for matrix Y
    printf("Enter the elements of matrix Y:\n");
    for( a = 0; a < i; a++)
    {
        for( b = 0; b < j; b++)
        {
            scanf("%d",&Yarr[a][b]);
        }
    }

    //displaying matrix Y
    printf("The matrix y is:\n");
    for( a = 0; a < i; a++)
    {
        for( b=0; b < j; b++)
        {
            printf("%d\t",Yarr[a][b]);
        }
        printf("\n");
    }

    //core logic for matrix addition
    int Rarr[MAX][MAX];
    for( a = 0; a < i; a++)
    {
        for( b=0; b < j; b++)
        {
            int sum=0;
            sum=sum+Xarr[a][b] + Yarr[a][b];
            Rarr[a][b]=sum;
        }
    }

    //displaying the resultant matrix 
    printf("The resultant matrix R is:\n");
    for( a = 0; a < i; a++)
    {
        for( b = 0; b < j; b++)
        {
            printf("%d\t",Rarr[a][b]);
        }
        printf("\n");
    }
    
    return 0;
}