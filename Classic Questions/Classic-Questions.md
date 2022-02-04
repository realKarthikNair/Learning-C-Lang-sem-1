### 1. // Write a C program to check whether a year is leap year or not
	
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
	
	


### 2. // Write a C program to find the types roots of a quadratic equation
	
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


