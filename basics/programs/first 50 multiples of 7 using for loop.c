// Display first 50 multiples of 7 using for loop

#include <stdio.h>

int main()
{
    int a=7;
    for (a; a<=(7*50); a+=7)
    {
        printf("%d ", a);
    }
}