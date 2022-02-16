// Write a C program to find maximum between two numbers.

#include <stdio.h>

int main()
{
	int a,b;
	printf("\nEnter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	if (a>b)
	{
		printf("\n%d is the maximum number", a);
	}
	else if (a<b)
	{
		printf("\n%d is the maximum number", b);
	}
	// Exception 
	else
	{
		printf("Entered numbers are equal");
	}
	printf("\n");
}


