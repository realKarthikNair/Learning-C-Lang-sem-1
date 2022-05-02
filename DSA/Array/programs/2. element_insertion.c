#include <stdio.h>

int main()
{
    int i, n = 6, k=2, array0[10] = {1, 22, 33, 65, 22, 54};

    // insert 25 at k=2;

    for (i=n-1; i>=k; i--)
    {
        array0[i+1]=array0[i];
    }

    array0[k]=25;
    n=n+1;

    printf("Array after deletion is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", array0[i]);
    }
    printf("\n");
}
