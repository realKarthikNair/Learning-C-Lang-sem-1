// // Matrix addition

// #include <stdio.h>

// int matrix0=[10][10], matrix1[10][10], rows, cols, i, j;

// int take_input(int matrix0[10][10], int matrix1[10][10], int rows, int cols);

// int add_matrices(int matrix0[10][10], int matrix1[10][10], int rows, int cols);

// int take_input(int matrix0[10][10], int matrix1[10][10], int rows,int  cols)
// {
//     for(i=0; i<rows; i++)
//     {
//         for(j=0; j<cols; j++)
//         {
//             printf("input value of row %d column %d: \n", i+1, j+1);
//             scanf("%d", &matrix0[i][j]);
//         }
//     }
// }

// int add_matrices(int matrix0[10][10], int matrix1[10][10], int rows, int cols)
// {
//     int matrix2[rows][cols];
//     for(i=0; i<rows; i++)
//     {
//         for(j=0; j<cols; j++)
//         {
//             matrix2[i][j] = matrix0[i][j]+matrix1[i][j];
//         }
//     }
// }

// int main()
// {
//     printf("Number of Rows and columns shouldn't exceed 10\n");
//     printf("Enter number of rows: ");
//     rows=scanf("%d",&rows);
//     printf("Enter number of columns: ");
//     cols=scanf("%d",&cols);
//     take_input(matrix0, matrix1, rows, cols);
//     add_matrices(matrix0, matrix1, rows, cols);
// }