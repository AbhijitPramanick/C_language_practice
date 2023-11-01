// WAP to demonstrate the sum function

#include <stdio.h>
int sum(int x, int y)
{
    return (x + y);
}
int main()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("The sum of %d and %d is %d\n", a, b, sum(a, b));

    return 0;
}