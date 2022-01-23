// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle

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
        if ((side1!=side2)||(side1!=side3)||(side2!=side3))
        {
            if ((side1==side2)||(side1==side3)||(side2==side3))
            {
                printf("Triangle is isosceles!");
            }
            else
            {
                printf("Triangle is scalene!");
            }
        }
        else
        {
            printf("Triangle is equilateral!");
        }    
    }
    else
    {
        printf("Input sides doesn't make a triangle!");
    }
    printf("\n");
}
