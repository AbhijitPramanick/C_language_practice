// Write a divisibility chacker program, taking divisor, dividend from the user.

#include <stdio.h>

int main()
{
    int divisor, dividend;
    printf("Enter dividend : ");
    scanf("%d", &dividend);
    printf("Enter dividend : ");
    scanf("%d", &divisor);
    if (!(dividend % divisor))
    {
        printf("Yes, %d divides %d\n", dividend, divisor);
    }
    else
    {
        printf("No, %d does not divide %d\n", dividend, divisor);
    }
    return 0;
}