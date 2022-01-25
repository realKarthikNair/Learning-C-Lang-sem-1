// Display counting from 1 to n using for loop

#include <stdio.h>

int main()
{
    int i=1,n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for (i;i<=n;i++)
    {
        printf("%d,",i);
    }
    printf("\n");
}
