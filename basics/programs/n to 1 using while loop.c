// Display counting from n to 1 using while loop

#include <stdio.h>

int main()
{
    int a=1, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while (a<=n)
    { 
        printf("%d,", n);
        n--;
    }
    printf("\n");
}
