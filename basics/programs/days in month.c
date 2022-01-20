// Write a C program to input month number and print number of days in that month

#include <stdio.h>

int main()
{
	int num, days;
	printf("Enter month number: ");
	scanf("%d", &num);
	if ((num>=1)&&(num<=12))
	{
		if (num==2)
		{
			days=28;
		}
		else if ((num==1)||(num==3)||(num==5)||(num==7)||(num==8)||(num==10)||(num==12))
		{
			days=31;
		}
		else
		{
			days=30;
		}
		printf("Month %d has %d days", num, days);
	}
	// Exception
	else
	{
		printf("input should be within 1 to 12");
	}
	printf("\n");
}

