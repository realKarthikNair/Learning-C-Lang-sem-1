### 1. // Write a C program to input any character and check whether it is alphabet, digit or special character
```c
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

```

### 2. // Write a C program to check whether a character is alphabet or not
```c
#include <stdio.h>

int main()
{
	char a;
	printf("Enter a character: ");
	scanf("%c",&a);
	printf("%c is ", a);
	if (((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
	{
		printf("an Alphabet");
	}
	else
	{
		printf("not an Alphabet");
	}
	printf("\n");
}



```

### 3. // Write a C program to check whether a character is uppercase or lowercase alphabet
```c
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


```

### 4. // Write a C program to input any alphabet and check whether it is vowel or consonant
```c
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





	
		

```

