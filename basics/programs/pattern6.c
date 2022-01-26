/*Display the following pattern on screen: ( Up to n rows)

A
B B
C C C
D D D D*/

#include <stdio.h>

int main()
{
    int i=1,j=1,n;
    char a='A';
    printf("Enter value of n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%c ", a);
            
        }
        a++;
        printf("\n");
    }
}
