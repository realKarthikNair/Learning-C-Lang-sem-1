// Write a program to calculate the area of a circle. Make a symbolic constant for PI.

#include <stdio.h>

// Define a symbolic constant PI
// It is a convention to name symbolic constants in uppercase
#define PI 3.14 

int main()
{
    int r;
    printf("Enter radius: ");
    scanf("%d",&r);
    printf("Area = %f", PI*r*r);
}