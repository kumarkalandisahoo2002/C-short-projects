// reversing a elements of the array

#include <stdio.h>
#define MAX 50
int main(void)
{
    char arr[MAX],size;

    //define the size of the array
    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    //taking elements for the array
    printf("Enter the elements for the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    //printing elements of the array in original order
    printf("original order of the elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%2d",arr[i]);
    }
        printf("\n");
    //printing the elements of the array in reverse order
    printf("reverse order of the elements:\n");
    for (int i = size-1; i >= 0; i--)
    {
        printf("%2d",arr[i]);
    }

    return 0;
}
