// Write a C program to check whether a year is leap year or not

#include <stdio.h>

int main()
{
        int year;
        printf("Enter an year: ");
        scanf("%d",&year);
        printf("%d is ", year);
        if ((year%4==0)&&((year%400==0)||((year%100)!=0)))
        {
        	printf("a leap year");
        }
        else
        {
        	printf("not a leap year");
        }
        printf("\n");
}


