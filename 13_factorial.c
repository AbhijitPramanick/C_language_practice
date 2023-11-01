// WAP to find the factorial of a number, where the number is taken from user

#include <stdio.h>

int main()
{
    int n, prod = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n > 0)
    {
        prod *= n;
        n--;
    }
    printf("Factorial = %d\n", prod);
    return 0;
}