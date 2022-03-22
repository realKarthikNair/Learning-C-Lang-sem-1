// Sort an array ascending and descending

#include <stdio.h>

int main()
{
    int array[]={3,4,43,23,32,33,21,39,98};
    int i, j, temp;
    // Sorting the array ascending
    for (i=0; i<9; i++)
    {
        for (j=i+1;j<9;j++)
        {
            if (array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    // Displaying the array in ascending order
    printf("The array in ascending order is\n");
    for (i=0; i<9; i++)
    {
        printf("%d, ", array[i]);
    }
    // Sorting the array descending
    for (i=0; i<9; i++)
    {
        for (j=i+1;j<9;j++)
        {
            if (array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    // Displaying the array in descending order
    printf("The array in ascending order is\n");
    for (i=0; i<9; i++)
    {
        printf("%d, ", array[i]);
    }
}