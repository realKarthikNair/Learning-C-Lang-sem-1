// Make a 3*3 matrix from user inputs and display it in the standard matrix format

#include <stdio.h>
int main()
{
    int m[3][3], i, j;
    for(i=0; i < 3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Input value of row %d column %d: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0; i < 3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}