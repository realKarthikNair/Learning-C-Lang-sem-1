/*Display the following pattern on screen: (Up to n rows)

*
**
*** */

#include <stdio.h>

int main()
{
    int i, n, j;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
