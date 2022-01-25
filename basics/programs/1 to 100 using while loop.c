// Display counting from 1 to 100 using while loop

#include <stdio.h>

int main()
{
    int start=1, end=100;
    while (start<=end)
    { 
        printf("%d,", start);
        start++;
    }
    printf("\n");
}
