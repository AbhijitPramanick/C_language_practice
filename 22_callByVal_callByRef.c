// Understanding call by Reference and Call by value
// Swapping the value of 2 variables using the above methods

#include <stdio.h>
void swap_by_call_by_val(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
void swap_by_call_by_ref(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int a = 1, b = 2;
    printf("Before swapping :\ta = %d,\tb = %d\n", a, b);
    swap_by_call_by_val(a, b);
    printf("After swapping by call by value :\ta = %d,\tb = %d\n", a, b);
    swap_by_call_by_ref(&a, &b);
    printf("After swapping by call by value :\ta = %d,\tb = %d\n", a, b);
    return 0;
}