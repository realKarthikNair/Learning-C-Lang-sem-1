/*Display the following pattern on screen: ( Up to n rows)
 
***** 
****
***
**
*

*/

#include <stdio.h>

int main()
{
    int i, n, j;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (n; i<=n; n--)
    {
        for (j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}