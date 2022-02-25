// Demonstrating the working of nested macros

#include <stdio.h>
#define PI 3.14
#define CIRCLE_AREA(x) PI*x*x

int main()
{
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    printf("Area is %f", CIRCLE_AREA(r));
}