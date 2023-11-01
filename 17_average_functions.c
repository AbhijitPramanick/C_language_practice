// WAP to find the average of 3 number using functions
#include <stdio.h>
float avg(float x, float y, float z)
{
    return (x + y + z) / 3;
}
int main()
{
    float a, b, c;
    printf("Enter a :");
    scanf("%f", &a);
    printf("Enter b :");
    scanf("%f", &b);
    printf("Enter c :");
    scanf("%f", &c);
    printf("The average of %0.1f, %0.1f and %0.1f is %0.1f\n", a, b, c, avg(a, b, c));
    return 0;
}