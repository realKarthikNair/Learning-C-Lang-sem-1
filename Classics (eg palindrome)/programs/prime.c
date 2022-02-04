// Find if entered number is a prime number

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
