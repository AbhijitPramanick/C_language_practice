// WAP to fuind the factorial of a number taken as input from the user. Use recursion.

#include <stdio.h>
int fact(int n)
{
    if (n <= 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, fact(n));
    return 0;
}