// Wap to calculate the simple interest by taking input from the user. The inputs are principal, rate per annum, time in years.
#include <stdio.h>

int main()
{
    float principal, rate, time, si;
    printf("Enter the principal : ");
    scanf("%f", &principal);
    printf("Enter the rate per annum : ");
    scanf("%f", &rate);
    printf("Enetr the time in years : ");
    scanf("%f", &time);
    si = principal * rate * time / 100;
    printf("The Simple interest obtained with principal of Rs.%f, rate per annum in percentage %f and in %f years is Rs.%0.2f", principal, rate, time, si);
    return 0;
}