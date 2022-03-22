// Write a program to add, subtract, multiply and divide two numbers using pointers

#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int* ptr1= &a;
    int* ptr2= &b;
    printf("%d added to %d is %d\n", *ptr1, *ptr2, *ptr1+*ptr2);
    printf("%d deducted from %d is %d\n", *ptr2, *ptr1, *ptr1-*ptr2);
    printf("%d times %d is %d\n", *ptr1, *ptr2, *ptr1**ptr2);
    printf("Quotient when %d is divided by %d is %d\n", *ptr1, *ptr2, (*ptr1)/(*ptr2));
}

