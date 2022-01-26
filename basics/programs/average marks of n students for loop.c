// Display average marks of n number of students, take inputs from user using for loop

#include <stdio.h>

int main()
{
    int n, marks, i=1;
    float sum=0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i; n>=i; i++)
    {
        printf("Enter marks of student %d: ", i);
        scanf("%d", &marks);
        sum += marks;
    }
    printf("Average marks of %d students is %f\n", n, sum/n);
}