### 1. // Sum of natural numbers using recursion
```c

#include <stdio.h>

int sum(int n);

int main(){
    int number, result;
    printf("Enter a positive natural number: ");
    scanf("%d",&number);
    result= sum(number);
    printf("sum=%d\n", result);
    return 0;
}

int sum(int n){
    if (n!=0)
        return n+sum(n-1);
    else
        return n;
}

// :-)
```

### 2. // calculate the factorial of given number
```c

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



```

### 3. // find if input is an armstrong number
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

### 4. // Write a program to calculate factorial of a number and display fibonacci series upto N terms using recursive functions
```c

#include <stdio.h>

int factorial(int n)
{   
    if (n!=0)
    {
        return n*factorial(n-1);
    }
    else
        return 1;
}

void fibonacci(int n)
{    
    static int n1=0,n2=1,n3;    
    if(n>0)
    {    
        n3 = n1 + n2;    
        n1 = n2;    
        n2 = n3;    
        printf("%d ",n3);    
        fibonacci(n-1);    
    }    
}    

int main()
{
    int choice, num, n;

    while (1)
    {
        printf("Enter \n 1 to calc factorial of a number \n 2 to print fibonacci series upto N terms\n 3 to exit\n Enter here: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter number: ");
            scanf("%d", &num);
            printf("Factorial is %d\n", factorial(num));
            break;
        case 2:
            printf("Enter N: ");
            scanf("%d", &n);
            printf("Fibonacci series upto %d terms is \n", n);
            printf("0 1 ");fibonacci(n-2);
            break;
        case 3:
            printf("exiting!!!");return 0;
        }
    }
}


```

