// Write a program to search for a number entered by the user in a given array and display the array in ascending order

#include <stdio.h>

int main()
{
    int array[]={3,4,43,23,32,33,21,39,98};
    int i,j,n,flag=0, temp;
    printf("Enter the number to be searched: ");
    scanf("%d", &n);
    for (i=0; i<9; i++)
    {
        if (n==array[i])
        {
            printf("%d found in array at index %d\n", n,i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("%d not found in array!\n",n);
    }
    // Sorting the array
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
}