/* Write a program to store marks of 6 students with 5 subjects each and calculate
1. The average marks of class per subject
2. Overall average marks of class
2. Student with Highest marks
*/

#include <stdio.h>
int main()
{
    int marks[6][5], i, j, a, b, highest=0, topper=0;
    float total, sum;

    // storing values into the array using a for loop
    for (i=0; i<6; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("Enter Mark of student %d in subject %d : ", i+1, j+1);
            scanf("%d",&marks[i][j]);
        }
    }

    // finding average per subject and class
    
    for (i=0; i<5; i++)
    {
        for (j=0; j<6; j++)
        {
            total+=marks[j][i];
            sum+=marks[j][i];
        }
        printf("Average marks of subject %d is %f\n", a+1, (total/6));
        total=0;
    }
    printf("Total average marks of class is %f\n", (sum/6));
    sum=0;

    // student with highest marks 

    for (i=0; i<6; i++)
    {
        for (j=0; j<5; j++)
        {
            sum+=marks[i][j];
        }
        if (sum> highest)
            topper=i;
            highest=sum;
            sum=0;
    }
    printf("Student with highest marks is student %d with %d marks\n", topper+1, highest);
}

