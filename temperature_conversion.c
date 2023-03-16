#include <stdio.h>
int main()
{
    float fahrenheit,celcius;
    printf("Enter temperature(F):\n");
    scanf("%f",&fahrenheit);
        printf("\n");
    celcius= 5*fahrenheit/9 - 17.778; //C=5/9(F-32)
    printf("Temp. in celcius:%f",celcius);

    return 0;
} 