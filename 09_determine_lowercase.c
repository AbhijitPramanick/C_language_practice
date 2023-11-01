// Wap to determin e whether a character entered is a lowercase or not.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
        printf("'%c' is in Lowercase", ch);
    else
        printf("'%c' is in not in lowercase", ch);
    return 0;
}