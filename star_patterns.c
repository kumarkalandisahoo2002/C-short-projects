//QNO.01

// #include <stdio.h>
// int main(void)
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }



// QNO.02

// #include <stdio.h>
// int main(void)
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             printf("%2d",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }



//QNO.03

// #include <stdio.h>
// int main(void)
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }



//QNO.04

// #include <stdio.h>
// int main(void)
// {
//     int i,j;
//     for(i=65;i<=70;i++)
//     {
//         for(j=65;j<=i;j++)
//         {
//             printf("%2c",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }



//QNO.05

// #include <stdio.h>
// int main(void)
// {
//     int i,j,k=65;
//     for(i=0;i<=5;i++) //in state of 0 & 5 we can write 65 & 70 respectively.
//     {
//         for ( j = 0; j <= i; j++)
//         {
//             printf("%2c",k++);
//         }
//         printf("\n");
//     }

//     return 0;
// }



//QNO.06

// #include <stdio.h>
// int main(void)
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=5;j>=i;j--)
//         {
//             printf("%2d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//QNO.07

// #include <stdio.h>
// int main(void)
// {
//     int i,j;
//     for ( i = 5; i <=5 ; i--)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             printf("%2d",j);
//         }
//         printf("\n");
//         if (i==1)
//         break;
        
//     }    
//     return 0;
// }



//QNO.08

// #include <stdio.h>
// int main(void)
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=5;j>=i;j--)
//         {
//             printf("%2d",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }



//QNO.09

// #include <stdio.h>
// int main(void)
// {
//     int i,j,k;
//     for(i=1;i<=5;i++)
//     {
        
//         for(j=5;j>=i;j--)
//         {
//             printf("%2d",k=j-4);
//         }
//         printf("\n");
//     }

//     return 0;
// }



//QNO10

// #include <stdio.h>
// int main(void)
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {    
//         for(j=5-(i-1);j>=1;j--)
//         {
//             printf("%2d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



//QNO11

// #include <stdio.h>
// int main(void)
// {
//     int i,j;
//     for ( i = 5; i <= 5; i--)
//     {
//         for ( j = 5; j >= 5-(-i+5); j--)
//         {
//             printf("%2d",j);
//         }
//         printf("\n");
//         if (i==1)
//         break;      
//     }
//     return 0;
// }


//QNO12
#include <stdio.h>
int main(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i>j)
            printf(" ");
            else
            printf("%2d",j);
        }
        printf("\n");
    }

    return 0;
}