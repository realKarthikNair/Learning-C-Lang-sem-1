// Write a C program to input any alphabet and check whether it is vowel or consonant

#include <stdio.h>

int main()
{
	char a;
	printf("Enter a character: ");
	scanf("%c",&a);
	printf("%c is ", a);
	if ((a=='a')||(a=='A')||(a=='e')||(a=='E')||(a=='i')||(a=='I')
	||(a=='o')||(a=='O')||(a=='u')||(a=='U'))
	{
		printf("a vowel!\n");
	}
	else if (((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
	{
		printf("a consonant!\n");
	}
	// Exception
	else
	{
		printf("neither a vowel nor a consonant!\n");
	}
}





	
		
