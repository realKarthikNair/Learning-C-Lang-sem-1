### 1. Write a C program to find maximum between two numbers

    // Write a C program to find maximum between two numbers.

    #include <stdio.h>

    int main()
    {
      int a,b;
      printf("Enter the first number: ");
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

### 2. Write a C program to find maximum between three numbers

    // Write a C program to find maximum between three numbers

    #include <stdio.h>

    int main()
    {
        int a,b,c;
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
        printf("Enter the third number: ");
        scanf("%d", &c);
        if ((a>b)&&(a>c))
        {
            printf("%d is the largest number !",a);
        }
        else if ((b>a)&&(b>c))
        {
            printf("%d is the largest number !",b);
        }
        else if ((c>a)&&(c>b))
        {
            printf("%d is the largest number !",c);
        }
        // Exception
        else
        {
            printf("Entered numbers are equal");
        }
        printf("\n");
    }





### 3. Write a C program to check whether a number is negative, positive or zero

    // Write a C program to check whether a number is negative, positive or zero

    #include <stdio.h>

    int main()
    {
        int num;
        printf("Enter a number: ");
        scanf("%d",&num);
        printf("The entered number '%d' is ",num);
        if (num>0)
        {
            printf("positive!");
        }
        else if (num<0)
        {
            printf("negative!");
        }
        else
        {
            printf("zero!");
        }
    }

### 4. Write a C program to check whether a number is divisible by 5 and 11 or not

    // Write a C program to check whether a number is divisible by 5 and 11 or not

    #include <stdio.h>

    int main()
    {
        int num;
        printf("Enter a number: ");
        scanf("%d",&num);
        if ((num%5==0)&&(num%11==0))
        {
            printf("%d is divisible by 5 and 11", num);
        }
        else
        {
            printf("%d is not divisible by 5 and 11", num);
        }
        printf("\n");
    }

### 5. Write a C program to check whether a number is even or odd

	// Write a C program to check whether a number is even or odd
	
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


	
