// Write a C program to check whether a character is uppercase or lowercase alphabet

#include <stdio.h>

int main()
{
	char a;
	printf("Enter a character: ");
	scanf("%c", &a);
	printf("entered character '%c' is ", a);
	if (((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
	{
		if ((a>='a')&&(a<='z'))
		{
			printf("lowercase");
		}
		else 
		{
			printf("uppercase");
		}
	}
	// Exception
	else
	{
		printf("not an alphabet");
	}
	printf("!\n");
}

