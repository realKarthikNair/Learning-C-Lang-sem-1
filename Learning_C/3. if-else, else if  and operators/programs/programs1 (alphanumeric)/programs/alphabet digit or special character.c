// Write a C program to input any character and check whether it is alphabet, digit or special character

#include <stdio.h>

int main()
{
	char a;
	printf("Enter a character: ");
	scanf("%c", &a);
	printf("Entered character is ");
	if (((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
	{
		printf("an alphabet");
	}
	else if ((a>='0')&&(a<='9'))
	{
		printf("a number");
	}
	else
	{
		printf("a special character");
	}
	printf("\n");
}	
