// Write a C program to calculate the area of a rectangle.
#include <stdio.h>

int main()
{
    float length, breadth, area;
    printf("Enter the length : ");
    scanf("%f", &length);
    printf("Enter the breadth : ");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("The area of the rectangle is %f\n", area);
    return 0;
}