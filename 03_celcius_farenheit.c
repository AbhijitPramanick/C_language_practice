// WAP to convert Celcius (centigrade degrees) temperature to Farenheit
// F = (C × 9/5) + 32
#include <stdio.h>

int main()
{
    float celcius, farenheit;
    printf("Enter the temperature in celcius : ");
    scanf("%f", &celcius);
    farenheit = (celcius * 9 / 5) + 32;
    printf("The entered temperature in farenheit is %0.2f\n", farenheit);
    return 0;
}