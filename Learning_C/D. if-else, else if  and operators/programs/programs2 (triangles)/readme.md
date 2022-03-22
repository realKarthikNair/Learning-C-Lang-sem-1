### 1. // Write a C program to input angles of a triangle and check whether triangle is valid or not
```c
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
	printf("\n");

}

```

### 2. // Write a C program to input all sides of a triangle and check whether triangle is valid or not
```c

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

```

### 3. // Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle
```c

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

```

