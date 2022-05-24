#include <stdio.h>

int main(void)
{
    int k=0, i=0, j=0, maxA=3, maxB=4, C[maxA+maxB+2];
    int A[4] = {34, 44, 51, 62};
    int B[5] = {11, 29, 57, 66, 71};

    for (k=0; i<=maxA && j<=maxB;)
    {
        if (A[i]<=B[j])
        {
            C[k++]=A[i++];
        }
        else
        {
            C[k++]=B[j++];
        }
    }

    while (i<=maxA)
    {
        C[k++]=A[i++];
    }

    while (j<=maxB)
    {
        C[k++]=B[j++];
    }

    for (k=0; k<9; k++)
    {
        printf("%d ,", C[k]);
    }
    printf("\n");
}