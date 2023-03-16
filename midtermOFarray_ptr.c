//finding middle element or mid term of an array

#include <stdio.h>

//declaring a function to find mid term
int *findmid(int arr[], int a);
int main(void)
{
    int arr[]={23,45,678,564,45,56,67};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    int *mid = findmid(arr, n);
    printf("%d", *mid);
    return 0;
}
int *findmid(int arr[], int n)
{
    return &arr[n/2];
}