//convert lowercase string to uppercase without strupr()

#include <stdio.h>
#define MAX 100
void functionupper(char s[]);

int main()
{
    char string[MAX];

    printf("Enter a string to convert it into upper case\n");
    gets(string);

    functionupper(string); // calling functionupper

    printf("Entered string in upper case is \"%s\"\n", string);

    return 0;
}

void functionupper(char s[]) 
{
    int c = 0;

    while (s[c] != '\0') 
    {
        if (s[c] >= 'a' && s[c] <= 'z') 
        {
            s[c] = s[c] - 32;
        }
        c++;
    }
}