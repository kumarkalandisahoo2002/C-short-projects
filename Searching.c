//LINEAR & BINARY SEARCHING
#include<stdio.h>
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }      
    }
    return -1;   
}

int binarysearch(int arr[], int size, int element)    
{
    int low, mid, high;
    low=0;
    high=size-1;

    while(low<=high)
    {   mid=(low+high)/2;
        if(arr[mid]==element)
            return mid;

        if (arr[mid]<element)
            low=mid+1;
        else
            high=mid-1;
    } 
    return -1;  
}

int main(void)
{
    //in case of binary searching elements of array must be sorted
    int arr[]={10,20,43,56,76,87,90,786,987,1000,1200,1389,1400},element;
    int size= sizeof(arr)/sizeof(int);
    printf("Enter the element that present in the array:\n");
    scanf("%d",&element);
    int searchindex= binarysearch(arr,size,element); //in case of linear search just replace binarysearch by linear search
    printf("The element %d is found at index %d",element,searchindex);
    return 0;
}