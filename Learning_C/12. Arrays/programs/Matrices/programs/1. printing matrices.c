// Make a 3*3 matrix from user inputs and display it in the standard matrix format

#include <stdio.h>
int main()
{
    int m[3][3], i, j;
    printf("Enter values for the 3*3 matrix\n\n");
    for(i=0; i < 3; i++)
    {
        printf("Input row %d with each value separated with space\n", i+1);
        for(j=0; j<3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    printf("Entered Matrix is\n");
    for(i=0; i < 3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}