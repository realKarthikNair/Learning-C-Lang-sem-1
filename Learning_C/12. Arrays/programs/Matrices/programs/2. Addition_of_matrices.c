// Matrix addition

#include <stdio.h>

int main()
{
    // declare itertives and matrices (1, 2 and resultant of addition
    int matrix0[10][10], matrix1[10][10], matrix2[10][10], rows, cols, i, j;
    printf("Number of rows and columns shouldn't exceed 10\n");
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("Enter number of columns: ");
    scanf("%d",&cols);

    printf("Input values for First Matrix\n");
    for(i=0; i<rows; i++)
    {
        printf("Enter row %d with each value separated with space\n", i+1);
        for(j=0; j<cols; j++)
        {
            scanf("%d", &matrix0[i][j]);
        }
    }
    
    printf("Input values for second Matrix\n");
    for(i=0; i<rows; i++)
    {
        printf("Enter row %d with each value separated with space\n", i+1);
        for(j=0; j<cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            matrix2[i][j] = matrix0[i][j] + matrix1[i][j];
        }
    }
    
    printf("Matrix sum is \n");
    for(i=0; i < rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
}