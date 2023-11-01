// WAP to find the sum of first n natural numbers, where the value of n is to be taken form user

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n)
    {
        sum += n;
        n--;
    }
    printf("Sum = %d\n", sum);
    return 0;
}