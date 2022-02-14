// find if input is an armstrong number

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
