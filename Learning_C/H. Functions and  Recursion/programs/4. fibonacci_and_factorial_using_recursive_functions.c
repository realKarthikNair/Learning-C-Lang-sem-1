// Write a program to calculate factorial of a number and display fibonacci series upto N terms using recursive functions

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

