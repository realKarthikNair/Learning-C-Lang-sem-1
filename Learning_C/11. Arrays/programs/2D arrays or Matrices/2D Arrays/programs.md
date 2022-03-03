### 1. /* 
### - 2D Array
### - Write a program to input the marks of 5 subjects each of n students and then display the sum of the marks of each student.
### */
```c

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
```

### 2. /* Write a program to store marks of 6 students with 5 subjects each and calculate
### 1. The average marks of class per subject
### 2. Overall average marks of class
### 2. Student with Highest marks
### */
```c

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


```

