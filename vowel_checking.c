//check whether character is vowel or not    
#include <stdio.h>
 
int main(void)
{
    char character;
    printf("Enter a character:\n");
    scanf("%c",&character);

    switch (character)
    {
    case 'a':
        printf("%c is a vowel.",character);
        break;
    case 'e':
        printf("%c is a vowel.",character);
        break;
    case 'i':
        printf("%c is a vowel.",character);
        break;
    case 'o':
        printf("%c is a vowel.",character);
        break;
    case 'u':
        printf("%c is a vowel.",character);
        break; 
    default:
        printf("%c is not a vowel.",character);
        break;
    }

    return 0;
}