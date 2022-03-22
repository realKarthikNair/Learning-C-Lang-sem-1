// Display sum of first 50 odd nos. Using while loop 

#include <stdio.h>

int main()
{
    int a=1, n=99, sum=0;
    while (a<=n)
    { 
        sum+=a;
        a+=2;
    }
    printf("%d\n", sum);
}
