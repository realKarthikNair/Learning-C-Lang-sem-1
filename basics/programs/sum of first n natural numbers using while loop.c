// Display sum of first n natural nos.  Using while loop 

#include <stdio.h>

int main()
{
    int a=1, n, sum=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    while (a<=n)
    { 
        sum+=a;
        a++;
    }
    printf("%d\n", sum);
}
