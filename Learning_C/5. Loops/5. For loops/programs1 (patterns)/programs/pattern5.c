/*48. Display the following pattern on screen: ( Up to n rows)
 
1 2 3 4 5
1 2 3 4 
1 2 3 
1 2 
1

*/

#include <stdio.h>

int main()
{
    int i, n, j;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (i=1; i<=n; n--)
    {
        for (j=1; j<=n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}