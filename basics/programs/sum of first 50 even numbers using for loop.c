// Display sum of first 50 even nos. Using for loop 

#include <stdio.h>

int main()
{
    int i=2,sum=0;
    for (i;i<=100;i+=2)
    {
        sum+=i;
    }
    printf("%d\n",sum);
}