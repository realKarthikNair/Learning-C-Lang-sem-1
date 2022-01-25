// Display average marks of n number of students, take inputs from  user Using while loop 

#include <stdio.h>

int main()
{
    int n, marks, count=1; float sum=0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    while (n>=count)
    {
        printf("Enter marks of student %d: ", count);
        scanf("%d", &marks);
        count++;sum+=marks;
    }
    printf("Average marks of %d students is %f", n, (sum/n));
}
