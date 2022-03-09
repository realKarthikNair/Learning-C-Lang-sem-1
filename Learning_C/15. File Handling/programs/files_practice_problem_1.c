/* Write a program to create two files with names EvenFile and OddFile.
Input 20 numbers from the user and save even numbers in EvenFile and odd numbers in OddFile.*/

// CODE NEEDS SOME FIXING

#include <stdio.h>

int main() 
{
    // Input 20 numbers from the user

    char c[100];

    int numbers[20];

    for(int i=0; i<(sizeof(numbers)/sizeof(int)); i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    // Save even numbers in EvenFile and odd numbers in OddFile

    FILE * odd = fopen("OddFile.txt", "w");
    FILE * even = fopen("EvenFile.txt", "w");

    for (int i=0; i<(sizeof(numbers)/sizeof(int)); i++)
    {
        printf("Number %d is %d ", i+1, numbers[i]);
        if ((numbers[i]%2)==0)
        {
            putw(numbers[i], even);
        }
        else
        {
            putw(numbers[i], odd);
        }
    }

    fclose(odd);
    fclose(even);

    FILE * oddnum = fopen("OddFile.txt", "r");

    // FILE * even = fopen("EvenFile.txt", "r");

    fread(c, 100, 20, even);

    printf("%s", c);

    fclose(oddnum);

}

