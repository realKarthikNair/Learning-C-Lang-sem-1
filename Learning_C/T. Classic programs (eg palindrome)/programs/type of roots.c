// Write a C program to find the types roots of a quadratic equation

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);
    d=((b*b)-(4*a*c));
    if (d>0)
    {
        printf("Roots are distinct");
    }
    else if (d==0)
    {
        printf("Roots are equal");
    }
    else
    {
        printf("Roots are imaginary");
    }
    printf("\n");
}
