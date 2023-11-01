// WAP to find the force exerted on a body of mass m by earth. use g = 9.8

#include <stdio.h>
float force(float m, float g)
{
    return m * g;
}
int main()
{
    float m, g = 9.8;
    printf("Enetr the mass of a body : ");
    scanf("%f", &m);
    printf("The force exerted on a body of mass %0.3f is %0.3f Newton.\n", m, force(m, g));
    return 0;
}