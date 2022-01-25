// Display counting from 100 to 1 using while loop

#include <stdio.h>

int main()
{
    int start=100, end=1;
    while (start>=end)
    { 
        printf("%d,", start);
        start--;
    }
    printf("\n");
}
