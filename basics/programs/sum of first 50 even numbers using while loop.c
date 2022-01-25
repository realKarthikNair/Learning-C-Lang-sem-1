// Display sum of first 50 even nos. Using while loop 

#include <stdio.h>

void main()
{
    int a=2, n=100, sum=0;
    while (a<=n)
    { 
        sum+=a;
        a+=2;
    }
    printf("%d\n", sum);
}
