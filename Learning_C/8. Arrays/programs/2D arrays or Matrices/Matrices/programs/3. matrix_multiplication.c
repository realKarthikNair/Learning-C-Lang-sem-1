// Multiply two matrices

# include <stdio.h>

int main()
{
    // declare itertives and matrices 
    int i, j, k, rows0, cols0, rows1, cols1, matrix0[10][10], matrix1[10][10], matrix2[10][10];
    printf("Number of Rows and columns shouldn't exceed 10\n");
    printf("Enter number of rows and columns for first Matrix\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows0);
    printf("Enter number of columns: ");
    scanf("%d", &cols0);

    printf("Enter number of rows and columns for second Matrix\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows1);
    printf("Enter number of columns: ");
    scanf("%d", &cols1);

    if (cols0!=rows1)
    {
        printf("Number of columns in first matrix should be equal to number of rows in second matrix\n");
        return 0;
    }

    printf("Input values into first Matrix\n");

    for(i = 0; i < rows0; i++)
    {
        printf("Input values in row %d with each value separated with space\n", i);
        for(j=0; j< cols0; j++)
        {
            scanf("%d", &matrix0[i][j]);
        }
    }

    printf("Input values into second Matrix\n");

    for(i = 0; i < rows1; i++)
    {
        printf("Input values in row %d with each value separated with space\n", i);
        for(j=0; j< cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Matrix multiplication

    for (i=0; i<rows0; i++)
    {
        for (j=0; j< cols1; j++)
        {
            matrix2[i][j]=0;
            for(k=0;k<rows1;k++)
            {
                matrix2[i][j]+=(matrix0[i][k]*matrix1[k][j]);
            }
        }
    }

    printf("Resultant matrix after matrix multiplication is\n");
    for(i=0; i < rows0; i++)
    {
        for(j=0; j<cols1; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
}