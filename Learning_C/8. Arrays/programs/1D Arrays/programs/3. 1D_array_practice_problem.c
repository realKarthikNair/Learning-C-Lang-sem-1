// Write a program to input marks of 50 students using an array and display the average marks of the class.

#include <stdio.h>

int main()
{
    float sum=0, average=0;
    int students[50], i, j;
    for (i = 0; i < 50; i++)
    {
        printf("Input marks of student %d: ", i+1);
        scanf("%d", &students[i]);
    }
    for (i = 0; i < 50; i++)
    {
        sum += students[i];
    }
    printf("Average marks of class is %f\n", sum/50);
}