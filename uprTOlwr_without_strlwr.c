//convert uppercase string to lowercase without strlwr()

#include <stdio.h>
#define MAX 100
void functionlower(char s[]);

int main()
{
    char string[MAX];

    printf("Enter a string to convert it into lowercase:\n");
    gets(string);

    functionlower(string); // calling functionlower

    printf("Entered string in lowercase is \"%s\"\n", string);

    return 0;
}

void functionlower(char s[])
{
    int c = 0;

    while (s[c] != '\0') 
    {
        if (s[c] >= 'A' && s[c] <= 'Z') 
        {
            s[c] = s[c] + 32;
        }
        c++;
    }
}