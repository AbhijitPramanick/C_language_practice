// Writing a program to understand Pointers

#include <stdio.h>

int main()
{
    int i = 15;
    int *j;
    j = &i;
    printf("i = %d\n", i);
    printf("j = %u\n", j);
    printf("&i = %u\n", &i);
    printf("&j = %u\n", &j);
    printf("*j = %d\n", *j);
    return 0;
}