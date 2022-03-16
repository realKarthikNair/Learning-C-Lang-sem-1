// calculate the factorial of given number

#include <stdio.h>

int fact(int a);

int fact(int num)
{
    int fact=1, i;
    if (num>0)
	{
		for (i=num; i>0; i--)
		{
			fact=fact*i;
		}
	}
	else
	{
		return 1;
	}
	return fact;
}


int main(int n, int factorial)
{
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<0)
    {
        printf("Input can't be a negative number.. aborting!\n"); return 0;
    }
    factorial=fact(n);
    printf("factorial of %d is %d\n", n, factorial);
}


