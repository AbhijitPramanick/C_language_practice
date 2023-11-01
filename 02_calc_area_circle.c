// Calculate the area of a circle and modify the same progeram to calculate the volume of a cylinder given its radius and height
#include <stdio.h>

int main()
{
    float radius, area, height, volume;
    char flag;
    printf("Enter the radius : ");
    scanf("%f", &radius);
    area = (22 / 7) * radius * radius;
    printf("The area of the circle is : %f\n", area);
    printf("Do you want the volume of the cylinder ? (Press 'Y' or 'N') : ");
    fflush(stdin);
    scanf("%c", &flag);
    if (flag == 'y' || flag == 'Y')
    {
        printf("Enter the height : ");
        scanf("%f", &height);
        volume = area * height;
        printf("The volume of the cylinder is : %0.1f\n", volume);
    }
    return 0;
}