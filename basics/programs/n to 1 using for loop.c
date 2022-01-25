// Display counting from n to 1 using for loop

#include <stdio.h>

int main()
{
    int i=1,n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for (n;n>=i;n--)
    {
        printf("%d,",n);
    }
    printf("\n");
}