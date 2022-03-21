/*Display the following pattern (Floyd’s Triangle) on screen: ( Up to n rows)
1
2 3
4 5 6
7 8 9 10… */


#include <stdio.h>

int main()
{
    int i=1, j=1, n=1, r;
    printf("Enter value of n: ");
    scanf("%d", &r);
    for (i=1; i<=r; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d ", n);
            n++;
            // The n variable basically is never reset
        }
        printf("\n");
    }
}