#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("%d is an ", num);
	if (num%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	printf(" number\n");
}


