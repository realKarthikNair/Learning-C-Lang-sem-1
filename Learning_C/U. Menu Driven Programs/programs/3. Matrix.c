/*Write a program to perform (i)matrix addition, (ii)matrix multiplication and (iii) matrix transporse on 2D arrays
*/

#include <stdio.h>

int main()
{
    int operation;
    int i, j, k, rows0, cols0, rows1, cols1, matrix0[10][10], matrix1[10][10], matrix2[10][10];
    while(1==1)
    {
        printf("Choose which operation do you want to execute\n");
        printf("Enter\n");
        printf("1 for matrix Addition\n");
        printf("2 for matrix Multiplication\n");
        printf("3 for matrix Transpose\n");
        printf("4 to exit\n");
        printf("Enter here: ");
        scanf("%d", &operation);
        switch (operation)
        {
            case 1:
                printf("Number of rows and columns shouldn't exceed 10\n");
                printf("Enter number of rows: ");
                scanf("%d",&rows0);
                printf("Enter number of columns: ");
                scanf("%d",&cols0);

                printf("Input values for First Matrix\n");
                for(i=0; i<rows0; i++)
                {
                    printf("Enter row %d with each value separated with space\n", i+1);
                    for(j=0; j<cols0; j++)
                    {
                        scanf("%d", &matrix0[i][j]);
                    }
                }
                
                printf("Input values for second Matrix\n");
                for(i=0; i<rows0; i++)
                {
                    printf("Enter row %d with each value separated with space\n", i+1);
                    for(j=0; j<cols0; j++)
                    {
                        scanf("%d", &matrix1[i][j]);
                    }
                }

                for(i=0; i<rows0; i++)
                {
                    for(j=0; j<cols0; j++)
                    {
                        matrix2[i][j] = matrix0[i][j] + matrix1[i][j];
                    }
                }
                
                printf("Matrix sum is \n");
                for(i=0; i < rows0; i++)
                {
                    for(j=0; j<cols0; j++)
                    {
                        printf("%d ", matrix2[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 2:
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
                break;
            case 3:
                printf("Number of rows and columns shouldn't exceed 10\n");
                printf("Enter  number of rows: ");
                scanf("%d", &rows0);
                printf("Enter number of columns: ");
                scanf("%d", &cols0);
                for(i = 0; i < rows0; i++)
                {
                    printf("Input values in row %d with each value separated with space\n", i);
                    for(j=0; j< cols0; j++)
                    {
                        scanf("%d", &matrix0[i][j]);
                    }
                }

                // Transporse the matrix
                for (i = 0; i < rows0; i++)
                {
                    for (j=0; j< cols0; j++)
                        matrix1[j][i] = matrix0[i][j];
                }

                printf("Resultant matrix after matrix transporse is\n");
                for(i=0; i < rows0; i++)
                {
                    for(j=0; j<cols0; j++)
                    {
                        printf("%d ", matrix1[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                printf("exiting!!!\n");return 0;
        }
    }
}
