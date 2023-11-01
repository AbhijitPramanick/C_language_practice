// If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
// If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
// If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
// The year is a leap year (it has 366 days).
// The year is not a leap year (it has 365 days).

// To determine whether a year is a leap year, follow the above steps.

// WAP to determine a entered year is a leap year

#include <stdio.h>

int main()
{
    int year, flag = 0;
    printf("Enter the year : ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        flag = 1;
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                flag = 0;
        }
    }
    if (flag)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}