#include <stdio.h>

int main()
{
    int i, n = 6, k=2, array0[10] = {1, 22, 33, 65, 22, 54};
    for(i=k; i<n-1; i++)
    {
        array0[i] = array0[i+1];
    }

    n=n-1;

    printf("Array after deletion is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", array0[i]);
    }
    printf("\n");
}


