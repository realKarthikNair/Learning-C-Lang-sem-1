### 1. // Convert celsius to fahrenheit by taking input from the user
```c

#include <stdio.h>

int main()
{
    int celsius;
    printf("Enter temperature in degree celsius: ");
    scanf("%d", &celsius);
    printf("Temperature in fahrenheit is %f\n", (celsius*1.8)+(32));
}
```

### 2. // Write a C program to input month number and print number of days in that month
```c

#include <stdio.h>

int main()
{
	int num, days;
	printf("Enter month number: ");
	scanf("%d", &num);
	if ((num>=1)&&(num<=12))
	{
		if (num==2)
		{
			days=28;
		}
		else if ((num==1)||(num==3)||(num==5)||(num==7)||(num==8)||(num==10)||(num==12))
		{
			days=31;
		}
		else
		{
			days=30;
		}
		printf("Month %d has %d days", num, days);
	}
	// Exception
	else
	{
		printf("input should be within 1 to 12");
	}
	printf("\n");
}


```

### 3. // Write a C program to check whether a number is divisible by 5 and 11 or not
```c

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


	

```

### 4. /*Write a C program to input electricity unit charges and calculate total electricity bill according to the given conditions:                
###  For first 50 units Rs. 0.50/unit 
###  For next 100 units Rs. 0.75/unit 
###  For next 100 units Rs. 1.20/unit 
###  For unit above 250 Rs. 1.50/unit 
###  An additional surcharge of 20% is added to the bill*/
```c

 #include <stdio.h>

 int main()
 {
     float units, cost;
     printf("Enter the number of units: ");
     scanf("%f", &units);
     if (units<=50)
     {
         cost=0.5;
     }
     else if (units<=150)
     {
         cost=0.75;
     }
     else if (units<=250)
     {
         cost=1.2;
     }
     else
     {
         cost=1.5;
     }
     printf("Elecricity charge is Rs %f", (0.2*(units*cost))+(units*cost));
     printf("\n");
 }
 
```

### 5. even or odd.c
```c

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



```

### 6. // Write a C program to check whether a number is negative, positive or zero
```c

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



```

### 7. /*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following: 
###  Percentage >= 90% : Grade A 
###  Percentage >= 80% : Grade B 
###  Percentage >= 70% : Grade C 
###  Percentage >= 60% : Grade D 
###  Percentage >= 50% : Grade E 
###  Percentage < 40% : Grade F */
```c

#include <stdio.h>

int main()
{
    float mark1, mark2, mark3, mark4, mark5, percentage;
    printf("Marks are out of 100 \n");
    printf("Input marks in Physics: ");
    scanf("%f", &mark1);
    printf("Input marks in Chemistry: ");
    scanf("%f", &mark2);
    printf("Input marks in Mathematics: ");
    scanf("%f", &mark3);
    printf("Input marks in Biology: ");
    scanf("%f", &mark4);
    printf("Input marks in Computer: ");
    scanf("%f", &mark5);
    percentage=((mark1+mark2+mark3+mark4+mark5)/500)*100; 
    printf("Percentage is %f \n", percentage);
    printf("Grade is ");
    if (percentage>=90)
    {
        printf("A");
    }
    else if (percentage>=80)
    {
        printf("B");
    }
    else if (percentage>=70)
    {
        printf("C");
    }
    else if (percentage>=60)
    {
        printf("D");
    }
    else if (percentage>=50)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }
    printf("\n");
}

```

### 8. /*Write a C program to input basic salary of an employee and calculate its Gross salary according to following: 
###  Basic Salary <= 10000 : HRA = 20%, DA = 80% 
###  Basic Salary <= 20000 : HRA = 25%, DA = 90% 
###  Basic Salary > 20000 : HRA = 30%, DA = 95% */
```c

 #include <stdio.h>

 int main()
 {
     float HRA, DA, basic;
     printf("Enter Basic Salary: ");
     scanf("%f", &basic);
     if (basic<=10000)
     {
         DA=(0.8)*basic;
         HRA=(0.2)*basic;
     }
     else if (basic<=20000)
     {
         DA=(0.9)*basic;
         HRA=(0.25)*basic;
     }
     else
     {
         DA=(0.95)*basic;
         HRA=(0.3)*basic;
     }
     printf("Gross Salary is %f\n", basic+HRA+DA);
 }

```

### 9. // Write a C program to find maximum between two numbers.
```c

#include <stdio.h>

int main()
{
	int a,b;
	printf("\nEnter the first number: ");
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



```

### 10. // Write a C program to find maximum between three numbers
```c

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
	if (((a>b)&&(a>c))||((a==b)&&(a>c)))
	{
		printf("%d is the largest number !",a);
	}
	else if (((b>a)&&(b>c))||((b==c)&&(b>a)))
	{
		printf("%d is the largest number !",b);
	}
	else if (((c>a)&&(c>b))||((a==c)&&(a>b)))
	{
		printf("%d is the largest number !",c);
	}
	else
	{
		printf("Entered numbers are equal");
	}
	printf("\n");
}

```

### 11. note_counter.c
```c

int main()
{
	int n;
	printf("Enter amount: ");
	scanf ("%d",&n);
	while (n!=0)
	{
		if (n>=2000)
		{
			printf("%d 2000 notes\n", n/2000);
			n=n%2000;
		}
		else if (n>=500)
		{
			printf("%d 500 notes\n", n/500);
			n=n%500;
		}
		else if (n>=200)
		{
			printf("%d 200 notes\n", n/200);
			n=n%200;
		}
		else if (n>=100)
		{
			printf("%d 100 notes\n", n/100);
			n=n%100;
		}
		else if (n>=50)
		{
			printf("%d 50 notes\n", n/50);
			n=n%50;
		}
		else if (n>=20)
		{
			printf("%d 20 notes\n", n/20);
			n=n%20;
		}
		else if (n>=10)
		{
			printf("%d 10 notes\n", n/10);
			n=n%10;
		}
		else if (n>=5)
		{
			printf("%d 5 notes\n", n/5);
			n=n%5;
		}
		else if (n>=2)
		{
			printf("%d 2 notes\n", n/2);
			n=n%2;
		}
		else if (n>=1)
		{
			printf("%d 1 notes\n", n/1);
			n=n%1;
		}
	}
}


```

### 12. profit or loss.c
```c

int main()
{    
    int cp, sp;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter sellings price: ");
    scanf("%d", &sp);
    if (sp>cp)
    {
        printf("Profit of %d", sp-cp);
    }
    else if (sp<cp)
    {
        printf("Loss of %d", cp-sp);
    }
    else
    {
        printf("No profit or loss");
    }
    printf("\n");
}

```

