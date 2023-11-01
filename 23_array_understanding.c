// WAP to input marks of 5 students and store it in an array

#include <stdio.h>

int main()
{
    int marks[5];
    printf("Enter the marks of 5 students : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("The marks of 5 students is : ");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", marks[i]);
    }
    return 0;
}