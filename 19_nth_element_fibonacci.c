// WAP to find the nth element of fibonacci series.

#include <stdio.h>
int fibo(int n)
{
    int a = 0, b = 1;
    for (int i = 3; i <= n; i++)
    {
        b = a + b;
        a = b - a;
    }
    return b;
}
int main()
{
    int n;
    printf("Enter n (a value greater than 2): ");
    scanf("%d", &n);
    printf("The fibonacci term at %dth position is %d\n", n, fibo(n));
    return 0;
}