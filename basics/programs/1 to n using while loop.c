// Display counting from 1 to n using while loop

#include <stdio.h>

int main()
{
    int a=1, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while (a<=n)
    { 
        printf("%d,", a);
        a++;
    }
    printf("\n");
}
