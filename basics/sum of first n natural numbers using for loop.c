// Display sum of first n natural nos. using for loop

#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (n; n>=1; n--)
    {
        sum+=n;
    }
    printf("%d\n", sum);
}