### 1. /*Write a menu driven program to construct a calculator for following arithmetic operations:
###  addition, subtraction, multiplication, division, average and percentage*/
```c

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, operation, len;
    float sum, num, sub, prod, percent;
    while (1)
    {
        printf("\nWhich operation do you want to carry out?\nEnter 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n 5 for average\n 6 for percentage \n7 to exit\nEnter here: ");
        scanf("%d", &operation);
        switch (operation)
        {
        case 1:
            sum=0;
            printf("How many Numbers to add?\nEnter Here :");
            scanf("%d", &len);
            for (i=0; i<len; i++)
            {
                printf("Enter number %d: ", i+1);
                scanf("%f", &num);
                sum+=num;
            }
            printf("sum is %f", sum);
            break;
        case 2:
            printf("How many Numbers to subtract?\nEnter Here :");
            scanf("%d", &len);
            int first;
            printf("Enter number 1: ");
            scanf("%d", &first);
            sub=first;
            for (i=1; i<len; i++)
            {
                printf("Enter number %d: ", i+1);
                scanf("%f", &num);
                sub-=num;
            }
            printf("Result after subtracting is %f.", sub);
            break;
        case 3:
            printf("How many Numbers to take product of?\nEnter Here :");
            scanf("%d", &len);
            prod=1;
            for (i=0; i<len; i++)
            {
                printf("Enter number %d: ", i+1);
                scanf("%f", &num);
                prod*=num;
            }
            printf("Product is %f.", prod);
            break;
        case 4:
            int div, divs;
            printf("Enter dividend: ");
            scanf("%d", &div);
            printf("Enter divisor: ");
            scanf("%d", &divs);
            printf("Quotient is %d and remainder is %d\n", (div/divs),(div%divs) );
            break;
        case 5:
            printf("How many Numbers to average?\nEnter Here :");
            scanf("%d", &len);
            sum=0;
            for (i=0; i<len; i++)
            {
                printf("Enter number %d: ", i+1);
                scanf("%f", &num);
                sum+=num;
            }
            printf("Average is %f", sum/len);
            break;
        case 6:
            float n, p; 
            printf("Enter number and what percentage of it is to be calculated.\n");
            printf("Enter number: ");
            scanf("%f", &n);
            printf("Enter what percentage of it is to be calculated: ");
            scanf("%f", &p);
            percent=(n/100)*p;
            printf("%f percentage of %f is %f", p, n, percent);
            break;
        case 7:
            printf("Abort!\n");return 0;
        }
        printf("\n");
    }
}   
```

### 2. /*Write a menu driven program to perform the following operations:
### 
### (i) Print armstrong numbers upto N
### (ii) Display prime numbers between 1 to N
### (iii) Reverse of an integer*/
```c

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
    while (1)
    {
        int operation, i, n;
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
            int n;
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
            int num, og_num;
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
```

