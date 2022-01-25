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


### 6. Write a C program to check whether a year is leap year or not

Method 1

	// Write a C program to check whether a year is leap year or not

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

Method 2

	// Write a C program to check whether a year is leap year or not

	#include <stdio.h>

	int main()
	{
		int year;
		printf("Enter an year: ");
		scanf("%d",&year);
		printf("Year is ");
		if (year%4==0)
		{
			if (year%400==0)
			{
				printf("a leap year");
			}
			else if ((year%100)!=0)
			{
				printf("a leap year");
			}
			else
			{
				printf("not a leap year");
			}
		}
		else
		{
			printf("not a leap year");
		}
		printf("\n");
	}

### 7. Write a C program to check whether a character is alphabet or not


	// Write a C program to check whether a character is alphabet or not

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

### 8. Write a C program to input any alphabet and check whether it is vowel or consonant

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

### 9. Write a C program to input any character and check whether it is alphabet, digit or special character
  
  	// Write a C program to input any character and check whether it is alphabet, digit or special character.  
	
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

### 10. Write a C program to check whether a character is uppercase or lowercase alphabet

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

### 11. Write a C program to input week day number and print week day name


	// Write a C program to input week day number and print week day name

	#include <stdio.h>

	int main()
	{
		int week_day_num;
		printf("Enter week day number: ");
		scanf("%d", &week_day_num);
		if (week_day_num==1)
		{
			printf("Monday");
		}
		else if (week_day_num==2)
		{
			printf("Tuesday");
		}
		else if (week_day_num==3)
		{
			printf("Wednesday");
		}
		else if (week_day_num==4)
		{
			printf("Thursday");
		}
		else if (week_day_num==5)
		{
			printf("Friday");
		}
		else if (week_day_num==6)
		{
			printf("Saturday");
		}
		else if (week_day_num==7)
		{
			printf("Sunday");
		}
		else
		{
			printf("Input must be numbers within 1 to 7");
		}
		printf("\n");
	}
	
### 12. Write a C program to input month number and print number of days in that month

	// Write a C program to input month number and print number of days in that month

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
### 13. Write a C program to count total number of notes in given amount (Indian currency notes)

	// Write a C program to count total number of notes in given amount
	
	#include <stdio.h>

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



### 14. Write a C program to input angles of a triangle and check whether triangle is valid or not

	// Write a C program to input angles of a triangle and check whether triangle is valid or not
	#include <stdio.h>

	int main()
	{
		int angle1, angle2, angle3;
		printf("Enter angle 1: ");
		scanf("%d", &angle1);
		printf("Enter angle 2: ");
		scanf("%d", &angle2);
		printf("Enter angle 3: ");
		scanf("%d", &angle3);
		if ((angle1+angle2+angle3)==180)
		{
			printf("Triangle is valid!");
		}
		else
		{
			printf("Triangle is invalid!");
		}

	}

### 15. Write a C program to input all sides of a triangle and check whether triangle is valid or not

	// Write a C program to input all sides of a triangle and check whether triangle is valid or not

	#include <stdio.h>

	int main()
	{
		int side1, side2, side3;
		printf("Enter side 1: ");
		scanf("%d", &side1);
		printf("Enter side 2: ");
		scanf("%d", &side2);
		printf("Enter side 3: ");
		scanf("%d", &side3);
		if (((side1+side2)>side3)&&((side2+side3)>side1)&&((side1+side3)>side2))
		{
			printf("Triangle is valid!");
		}
		else
		{
			printf("Triangle is invalid!");
		}
		printf("\n");
	}

### 16. Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle

	// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle

	#include <stdio.h>

	int main()
	{
		int side1, side2, side3;
		printf("Enter side 1: ");
		scanf("%d", &side1);
		printf("Enter side 2: ");
		scanf("%d", &side2);
		printf("Enter side 3: ");
		scanf("%d", &side3);
		if (((side1+side2)>side3)&&((side2+side3)>side1)&&((side1+side3)>side2))
		{
			if ((side1!=side2)||(side1!=side3)||(side2!=side3))
			{
				if ((side1==side2)||(side1==side3)||(side2==side3))
				{
					printf("Triangle is isosceles!");
				}
				else
				{
					printf("Triangle is scalene!");
				}
			}
			else
			{
				printf("Triangle is equilateral!");
			}    
		}
		else
		{
			printf("Input sides doesn't make a triangle!");
		}
		printf("\n");
	}

### 17. Write a C program to find the types roots of a quadratic equation

	// Write a C program to find the types roots of a quadratic equation

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

### 18. Write a C program to calculate profit or loss

	// Write a C program to calculate profit or loss

	#include <stdio.h>

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

### 19. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following: 
### Percentage >= 90% : Grade A 
### Percentage >= 80% : Grade B 
### Percentage >= 70% : Grade C 
### Percentage >= 60% : Grade D 
### Percentage >= 50% : Grade E 
### Percentage < 40% : Grade F 

	/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following: 
	Percentage >= 90% : Grade A 
	Percentage >= 80% : Grade B 
	Percentage >= 70% : Grade C 
	Percentage >= 60% : Grade D 
	Percentage >= 50% : Grade E 
	Percentage < 40% : Grade F */

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

### 20. Write a C program to input basic salary of an employee and calculate its Gross salary according to following: 
 Basic Salary <= 10000 : HRA = 20%, DA = 80% <br>
 Basic Salary <= 20000 : HRA = 25%, DA = 90% <br>
 Basic Salary > 20000 : HRA = 30%, DA = 95% <br>

	/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following: 
	Basic Salary <= 10000 : HRA = 20%, DA = 80% 
	Basic Salary <= 20000 : HRA = 25%, DA = 90% 
	Basic Salary > 20000 : HRA = 30%, DA = 95% */

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

### Write a C program to input electricity unit charges and calculate total electricity bill according to the given conditions:                
 For first 50 units Rs. 0.50/unit <br>
 For next 100 units Rs. 0.75/unit <br>
 For next 100 units Rs. 1.20/unit <br>
 For unit above 250 Rs. 1.50/unit <br>
 An additional surcharge of 20% is added to the bill <br>

 