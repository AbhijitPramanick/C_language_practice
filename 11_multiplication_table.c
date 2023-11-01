// WAP to print the multiplication table taking the number from the user

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The multiplication table of %d is as following...\n\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}