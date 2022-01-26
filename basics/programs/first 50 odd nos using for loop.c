// Display first 50 odd nos. Using for loop 

#include <stdio.h>

int main()
{
    int i=1;
    for (i; i<=99; i+=2)
    {
        printf("%d,", i);
    }
    printf("\n");
}