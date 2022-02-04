### 1. // find if input is an armstrong number
	
	#include <stdio.h>
	
	int sum_pow(int number, int digits);
	int count_digits(int number);
	
	int count_digits(int number)
	{
	    if (number>0)
	    {
	        number=number/10;
	        return 1 + count_digits(number);
	    }
	    else
	    {
	        return 0;
	    }
	}
	
	int sum_pow(int number, int digits)
	{
	    int i, j=digits, digit=1;
	    if (number>0)
	    {
	        for (i=1;1<=j;j--)
	        {
	            digit=digit*(number%10);
	        }
	        return digit+ sum_pow((number/10), digits);
	    }
	    else
	        digit-=1;
	        return digit;
	}
	
	int main()
	{
	    int number, digits, sum;
	    printf("Enter a number:");
	    scanf("%d", &number);
	    digits=count_digits(number);
	    sum=sum_pow(number, digits);
	    if (sum==number)
	    {
	        printf("Armstrong number!\n");
	    }
	    else
	    {
	        printf("Not an armstrong number!\n");
	    }
	}
	
	// Life is hard.


### 2. // Write a C program to check whether a year is leap year or not
	
	#include <stdio.h>
	
	int main()
	{
	        int year;
	        printf("Enter an year: ");
	        scanf("%d",&year);
	        printf("%d is ", year);
	        if ((year%4==0)&&((year%400==0)||((year%100)!=0)))
	        {
	        	printf("a leap year");
	        }
	        else
	        {
	        	printf("not a leap year");
	        }
	        printf("\n");
	}
	
	


### 3. // Find if input is a palindrome number
	
	#include <stdio.h>
	
	int reverse(int number);
	
	int reverse(int number)
	{
	    int num1=0;
	    while (number>0)
	    {
	        num1=(num1*10)+(number%10);
	        number/=10;
	    }
	    return num1;
	}
	
	void main()
	{
	    int num, og_num;
	    printf("Enter a number: ");
	    scanf("%d",&num);
	    og_num=num;
	    num=reverse(num);
	    if (og_num==num)
	    {
	        printf("Palindrome!\n");
	    }
	    else
	    {
	        printf("Not a Palindrome\n");
	    }
	}

### 4. // Find if entered number is a prime number
	
	#include <stdio.h>
	
	int prime_num(int number);
	
	int prime_num(int number)
	{
	    int i, j=(number/2);
	    for (i=2;i<=j;i++)
	    {
	        if (number%i==0)
	        {
	            return 0;
	        }
	    }
	    return 1;
	}
	
	int main()
	{
	    int n; int if_prime;
	    printf("Enter a number: ");
	    scanf("%d", &n);
	    if (n<0)
	    {
	        printf("Negative numbers can't be prime!\n"); return 0;
	    }
	    else if (n<=1)
	    {
	        printf("%d is neither prime nor composite!\n", n); return 0;
	    }
	    else
	    {
	        if_prime=prime_num(n);
	        if (if_prime==1)
	        {
	            printf("%d is a prime number\n", n);
	        }
	        else
	        {
	            printf("%d is not a prime number\n", n);
	        }
	    }
	}


### 5. // Write a C program to find the types roots of a quadratic equation
	
	#include <stdio.h>
	
	int main()
	{
	    int a, b, c, d;
	    printf("Enter value of a: ");
	    scanf("%d", &a);
	    printf("Enter value of b: ");
	    scanf("%d", &b);
	    printf("Enter value of c: ");
	    scanf("%d", &c);
	    d=((b*b)-(4*a*c));
	    if (d>0)
	    {
	        printf("Roots are distinct");
	    }
	    else if (d==0)
	    {
	        printf("Roots are equal");
	    }
	    else
	    {
	        printf("Roots are imaginary");
	    }
	    printf("\n");
	}


