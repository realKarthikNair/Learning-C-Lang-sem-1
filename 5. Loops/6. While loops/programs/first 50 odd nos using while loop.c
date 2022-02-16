// Display first 50 odd nos. Using while loop 

#include <stdio.h>

int main()
{
    int a=1, n=99;
    while (a<=n)
    { 
        printf("%d,", a);
        a+=2;
    }
    printf("\n");
}

