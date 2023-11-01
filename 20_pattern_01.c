// WAP to print the following for input value of n taken from user :
// *
// * *
// * * *
// * * * *

#include <stdio.h>
void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}