// WAP to check if a number is palindrome or not using functions and pointers


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