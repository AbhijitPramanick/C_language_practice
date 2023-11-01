// 2.5L - 5L ------> 5%
// 5.0L - 10.0L ------> 20%
// Above 10.0L ------> 30%

#include <stdio.h>

int main()
{
    float income, tax;
    printf("Enter the income in lakhs per annum: ");
    scanf("%f", &income);

    if (income < 2.5)
        tax = 0;
    if (income >= 2.5 && income <= 5)
        tax = income * 0.05 * 100000;
    else if (income >= 5.0 && income <= 10.0)
        tax = income * 0.2 * 100000;
    else if (income > 10.0)
        tax = income * 0.3 * 100000;

    printf("Your income is Rs. %f lakhs and Tax to be paid is : Rs.%0.1f\n", income, tax);
    return 0;
}