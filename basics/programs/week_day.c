// Write a C program to input week day number and print week day name


// This question can easily be done using arrays, but for these questions I was not allowed to use them.

#include <stdio.h>

void main()
{
	int week_day_num;
	printf("Enter week day number: ");
	scanf("%d", &week_day_num);
	if (week_day_num==1)
	{
		printf("Monday");
	}
	else if (week_day_num==2)
	{
		printf("Tuesday");
	}
	else if (week_day_num==3)
	{
		printf("Wednesday");
	}
	else if (week_day_num==4)
	{
		printf("Thursday");
	}
	else if (week_day_num==5)
	{
		printf("Friday");
	}
	else if (week_day_num==6)
	{
		printf("Saturday");
	}
	else if (week_day_num==7)
	{
		printf("Sunday");
	}
	else
	{
		printf("Input must be numbers within 1 to 7");
	}
	printf("\n");
}

