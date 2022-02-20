// find the factorial of a number

#include <stdio.h>

int main()
{
	int i,num,fact=1;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (num>0)
	{
		for (i=num; i>0; i--)
		{
			fact=fact*i;
		}
	}
	else if (num==0)
	{
		fact=1;
	}
	else
	{
		printf("Negative numbers cant be an input!");
		return 0;
	}
	printf("Factorial of %d is %d\n", num, fact);
}
    
