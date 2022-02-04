// Print prime numbers between range input by user

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
    int i, m, n;
    printf("Enter lower limit: ");
    scanf("%d", &m);
    printf("Enter upper limit: ");
    scanf("%d", &n);
    printf("Prime numbers between %d and %d are: ", m, n);
    for (i=m; i<=n; i++)
    {
        if(prime_num(i)==1)
        {
            printf("%d, ", i);
        }
    }
}


