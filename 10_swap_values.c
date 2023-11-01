// WAP to swap value of two integers, without using third variable

#include <stdio.h>

int main()
{
    int a = 1, b = 2;
    printf("a = %d,\tb = %d", a, b);
    // a = a + b;
    // b = a - b;
    // a = a - b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\na = %d,\tb = %d", a, b);
    return 0;
}