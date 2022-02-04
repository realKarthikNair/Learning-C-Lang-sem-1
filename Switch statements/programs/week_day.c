// Write a C program to input week day number and print week day name

#include <stdio.h>

int main()
{
	int week_day_num;
	printf("Enter week day number: ");
	scanf("%d", &week_day_num);
	if ((week_day_num>0)&&(week_day_num<8))
	{
			switch (week_day_num)
		{
			case 1: printf("Monday"); break;
			case 2: printf("Tuesday"); break;
			case 3: printf("Wednesday"); break;
			case 4: printf("Thursday"); break;
			case 5: printf("Friday"); break;
			case 6: printf("Saturday"); break;
			case 7: printf("Sunday"); break;
		}
	}
	else
	{
		printf("Input must be numbers within 1 to 7 ");
	}
	printf("\n");
}

