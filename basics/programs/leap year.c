// Write a C program to check whether a year is leap year or not

#include <stdio.h>

int main()
{
        int year;
        printf("Enter an year: ");
        scanf("%d",&year);
        printf("Year is ");
        if (year%4==0)
        {
                if (year%400==0)
                {
                        printf("a leap year");
                }
                else if ((year%100)!=0)
                {
                        printf("a leap year");
                }
                else
                {
                        printf("not a leap year");
                }
        }
        else
        {
                printf("not a leap year");
        }
        printf("\n");
}


