
//finding biggest & smallest number And it's position in array 
 
#include<stdio.h>
#define MAX 500
int main(void)
{
    int arr[MAX],max,min,maxpos,minpos,n,i;

    //define the size of the array
    printf("Enter the size of the array::\n");
    scanf("%d",&n);

    //accepting elements for the array
    printf("Enter the elements of array a(no repeatation of any elements):\n");
    for ( i = 1; i <= n; i++)
    {
        printf("%d element of the array a is:",i);
        scanf("%d",&arr[i]);
    }

    //core logic implimentation

    //finding maximum no. & it's index number
    max=arr[1];
    maxpos=1;
    for ( i = 1; i <= n; i++)
    {
        if (max < arr[i])
        {
            max=arr[i];
            maxpos=i;
        }   
    }

    //finding minimum no. & it's index number
    min=arr[1];
    minpos=1;
    for ( i = 1; i <= n; i++)
    {
        if (min > arr[i])
        {
            min=arr[i];
            minpos=i;
        }  
    }

    //printing results
    printf("The maximum number in the array arr is: %d\n",max);
    printf("The position (index number) of %d is: %d\n",max,maxpos);
    
    printf("The minimum number in the array arr is: %d\n",min);
    printf("The position (index number) of %d is: %d\n",min,minpos);
    
    
    return 0;
}