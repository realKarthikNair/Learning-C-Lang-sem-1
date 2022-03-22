/*Write a menu driven program to perform the following operations:

(i) Print armstrong numbers upto N
(ii) Display prime numbers between 1 to N
(iii) Reverse of an integer*/

#include <stdio.h>
int prime_num(int number);
int sum_pow(int number, int digits);
int count_digits(int number);
int reverse(int number);

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

int reverse(int number)
{
    int num1=0;
    while (number>0)
    {
        num1=(num1*10)+(number%10);
        number/=10;
    }
    return num1;
}

int main()
{
    int operation, i, n;
    int num, og_num;
    while (1)
    {
        printf("Input which operation is to be performed\n");
        printf("1 to print armstrong numbers upto N\n");
        printf("2 to print prime numbers between 1 to N\n");
        printf("3 to reverse an integer\n");
        printf("4 to quit the program\n");
        printf("Enter here: ");
        scanf("%d", &operation);
        switch (operation)
        {
        case 1:
            printf("Enter value of n: ");
            scanf("%d", &n);
            for (i=0; i<n; i++)
            {
                int digits, sum;
                digits=count_digits(i);
                sum=sum_pow(i, digits);
                if (sum==i)
                {
                    printf("%d, ", i);
                }
            }
            break;
        case 2:
            printf("Enter N: ");
            scanf("%d", &n);
            printf("Prime numbers between 1 and %d are: ", n);
            for (i=1; i<=n; i++)
            {
                if(prime_num(i)==1)
                {
                    printf("%d, ", i);
                }
            }
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d",&num);
            og_num=num;
            num=reverse(num);
            printf("Reverse of %d is %d\n", og_num, num);
            break;
        case 4:
            printf("Abort!\n");
            return 0;
        }
        printf("\n");
    }
}