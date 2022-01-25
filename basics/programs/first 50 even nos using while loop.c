// Display first 50 even nos. Using while loop

#include <stdio.h>

void main()
{
    int a=2, n=100;
    while (a<=n)
    { 
        printf("%d,", a);
        a+=2;
    }
    printf("\n");
}