### 1. // Program to demonstrate pointers in C
```c

#include <stdio.h>
int main()
{
    int num = 1;  //declared an integer variable named num with value 10
    int *p;  //declared variable p of type pointer
    p = &num; //p is pointing to the address of the variable num of type integer.
    printf("value of p is %p\n", p);
    printf("Value of &p is is %p\n", &p);
    printf("value of *p is %d\n", *p);
    printf("value of num is %d\n", num);
    printf("Value of &num is %p\n", &num);
}

```

### 2. // Write a program to add, subtract, multiply and divide two numbers using pointers
```c

#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int* ptr1= &a;
    int* ptr2= &b;
    printf("%d added to %d is %d\n", *ptr1, *ptr2, *ptr1+*ptr2);
    printf("%d deducted from %d is %d\n", *ptr2, *ptr1, *ptr1-*ptr2);
    printf("%d times %d is %d\n", *ptr1, *ptr2, *ptr1**ptr2);
    printf("Quotient when %d is divided by %d is %d\n", *ptr1, *ptr2, (*ptr1)/(*ptr2));
}


```

### 3. // Swap two variables using pointers
```c

#include<stdio.h> 

void swap (int* x,int* y);

int main()

{

    int a,b;

    printf("Enter Value of a: ");

    scanf("%d",&a); 

    printf ("Enter Value of b: ");

    scanf("%d", &b);

    printf("Before swapping\n Value of a is %d \n Value of b is %d \n", a, b);

    swap (&a, &b);

    printf("After swapping\n Value of a is %d \n Value of b is %d", a, b);

}

void swap (int* x ,int* y)

{

    int t=*x;

    *x=*y;

    *y=t;

}
```

### 4. // WAP to check if a number is palindrome or not using functions and pointers
```c


#include <stdio.h>

// Declaring a function to reverse a number where pointer to the number is passed
void reverse(int*);

// Declaring a fucntion to check if values of passed pointers are equal
int palindrome_check(int*, int*);

void reverse(int* number)
{
    int num1=0;
    // reversing a number by adding its remainder on each iteration after dividing by 10
    while ((*(number))>0)
    {
        num1=(num1*10)+((*(number))%10);
        (*(number))/=10;
    }
    // storing reversed value in pointer to original number for reuse in palindrome_check function
    *(number)=num1;
}

int palindrome_check(int* original_number, int* reverse)
{
    // check if reverse and original number are the same, if yes exit with 1, else 0.
    if ((*(original_number))==(*(reverse)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // declaring variables
    int num, copy;
    printf("Enter a number: ");
    scanf("%d",&num);
    // a copy of original number is needed since the reverse function reversed the value at the memory address of num
    copy=num;
    reverse(&num);
    int if_palindrome=palindrome_check(&copy, &num);
    if (if_palindrome==1)
    {
        printf("Number is a Palindrome!\n");
    }
    else
    {
        printf("Number is not a Palindrome!\n");
    }
}
```

