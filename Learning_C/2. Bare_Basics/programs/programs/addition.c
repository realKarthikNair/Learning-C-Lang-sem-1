// Add two numbers 'a' and 'b'. Numbers should be user inputs

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf(" The sum of %d and %d is %d\n", a, b, a + b);
}