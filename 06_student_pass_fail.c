// WAP to find out whether a student is pass or fail, if it requires total 40% and atleast 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user
#include <stdio.h>

int main()
{
    int m1, m2, m3, total;
    printf("Enter the marks of subject 1 : ");
    scanf("%d", &m1);
    printf("Enter the marks of subject 2 : ");
    scanf("%d", &m2);
    printf("Enter the marks of subject 3 : ");
    scanf("%d", &m3);
    total = m1 + m2 + m3;
    if (m1 >= 33 && m2 >= 33 && m3 >= 33 && total >= 40)
    {
        printf("Student passed\n");
    }
    else
    {
        printf("Student failed\n");
    }
    return 0;
}