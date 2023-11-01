// WAP to reverse an array passed to a function

#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int n = sizeof(a) / sizeof(int);
    printf("The contents of the array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    // Reversing the contents of the array
    for (int i = 0; i < n / 2; i++)
    {
        a[i] = a[i] + a[n - i - 1];
        a[n - i - 1] = a[i] - a[n - i - 1];
        a[i] = a[i] - a[n - i - 1];
    }
    printf("\nThe contents of the array after reversing is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}