/* 
- 2D Array
- Write a program to input the marks of 5 subjects each of n students and then display the sum of the marks of each student.
*/

#include <stdio.h>
int main()
{
    // defining the 2D array to store marks of 6 students
    // 6 rows and 5 columns indicate 6 students with 5 subjects each
    int marks[6][5];
    // Defining the variables needed to iterate through the array
    int i,j;
    // Defining a variable to store the sum of the marks of each student
    int sum = 0;

    // storing values into the array using a for loop
    for (i=0; i<6; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("Enter Mark %d of student %d : ", j+1, i+1);
            scanf("%d",&marks[i][j]);
        }
    }

    // calculating total marks of each student by reading values from the array and storing in a variable called "sum"
    for (i=0; i<6; i++)
    {
        for (j=0; j<5; j++)
        {
            sum += marks[i][j];
        }
        printf("Student %d had a  total score of %d.\n", i+1, sum);
        // reset the variable after each iteration of outer loop so that we can use it for the next student
        sum=0;
    }

}