//reversing a number using array

#include <stdio.h>
#define MAX 50
int main(void)
{
    int arr[MAX],size;

    //define the size of the anumber
    printf("Enter total number of digits in the number:\n");
    scanf("%d",&size);

    //taking elements for the number
    printf("Enter the elements of the number:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    //printing original number
    printf("original number:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
        printf("\n");

    //printing revered number
    printf("reversed number:\n");
    for (int i = size-1; i >= 0; i--)
    {
        printf("%d",arr[i]);
    }

    return 0;
}