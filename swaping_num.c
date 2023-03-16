//swaping two numbers using pointer

#include <stdio.h>
 
int main(void)
{
    int a,b;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    
    //accepting the value of a & b
    printf("Enter the value of a & b:\n");
    scanf("%d%d",&(*ptr1), &(*ptr2));

    //printing the value of a & b before swaping
    printf("Before swaping ::\n");
    printf("a = %d & b = %d",*ptr1,*ptr2);

    //core logic implimentation
    int k;
    k = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = k;

    //printing the value of a & b after swaping
    printf("\n\nAfter swaping ::\n");
    printf("a = %d & b = %d",*ptr1,*ptr2);
    
    return 0;
}


//                          SWAPING THE NUMBER
// #include <stdio.h>
// int main()
// {
//     int a,b,swap;
//     printf("Enter the value of a & b:\n");
//     scanf("%d%d",&a,&b);
//         printf("\n");
    
//     printf("a=%d b=%d",a,b);
//         printf("\n");
//     swap=a;
//     a=b;
//     b=swap;
//     printf("After swaping ::\n");
//     printf("a=%d b=%d",a,b);
//         printf("\n");
//     return 0;
// }