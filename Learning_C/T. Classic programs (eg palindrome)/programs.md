### 1.  find if input is an armstrong number
```c

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

```

### 2.  find the factorial of a number
```c

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
    

```

### 3.  Write a C program to check whether a year is leap year or not
```c

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



```

### 4.  Demonstrating Linear search
```c

#include <stdio.h>

// Arr is the array of numbers, n is the number of elements in the array, e is the element to be searched

int linear_search(int arr[], int e, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == e)
        return i;
    }
    return 0;
}


int main()
{
    int arr[] = {22, 23, 34, 65, 42, 34};
    int e = 34;
    int n = sizeof(arr)/sizeof(arr[0]);
   
    // Function call
    int result = linear_search(arr, e, n);
    (result == 0)? (printf("Element is not present in array")): (printf("Element is present at index %d", result));
}
```

### 5.  Find if input is a palindrome number
```c

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
```

### 6.  Find if entered number is a prime number
```c

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

```

### 7.  Print prime numbers between range input by user
```c

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
    int i, m, n;
    printf("Enter lower limit: ");
    scanf("%d", &m);
    printf("Enter upper limit: ");
    scanf("%d", &n);
    printf("Prime numbers between %d and %d are: ", m, n);
    for (i=m; i<=n; i++)
    {
        if(prime_num(i)==1)
        {
            printf("%d, ", i);
        }
    }
}



```

### 8.  Write a C program to find the types roots of a quadratic equation
```c

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

```

