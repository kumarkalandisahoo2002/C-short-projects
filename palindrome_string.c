//palindrome checking using string functions

#include <stdio.h>
#include<string.h>
#define MAX 100

int main(void)
{
    char arr[MAX],cmp[MAX];

    printf("Enter a string :\n");
    gets(arr);
    printf("print the string in it's original form:\n");
    puts(arr);

    strcpy(cmp,arr);
    strrev(arr);
    printf("After reversing the string becomes:\n%s\n",arr);

    int comp;
    comp = strcmp(cmp,arr);
    if(comp == 0)
    printf("The given string is a palindrome.");
    else
    printf("It is not a palindrome.");

    return 0;
}