// Write a C program to input all sides of a triangle and check whether triangle is valid or not

#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter side 1: ");
    scanf("%d", &side1);
    printf("Enter side 2: ");
    scanf("%d", &side2);
    printf("Enter side 3: ");
    scanf("%d", &side3);
    if (((side1+side2)>side3)&&((side2+side3)>side1)&&((side1+side3)>side2))
    {
        printf("Triangle is valid!");
    }
    else
    {
        printf("Triangle is invalid!");
    }
    printf("\n");
}
