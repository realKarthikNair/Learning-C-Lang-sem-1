// Display sum of first 50 odd nos. Using for loop

#include <stdio.h>

int main()
{
    int i=1,sum=0;
    for (i;i<=99;i+=2)
    {
        sum+=i;
    }
    printf("%d\n",sum);
}

