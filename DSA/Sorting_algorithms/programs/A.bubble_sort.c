/* Bubble Sort
# Time complexity: O(n^2)
# Space complexity: O(1)
*/

#include <stdio.h>

void print_array(int n, int arr[])
{
    for (int i=0; i<n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}


int main()
{
    int i, j, n, temp;
    int array0[10]={34,22,33,11,76,91,3,43,1};
    n=9;
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<(n-i-1); j++)
        {
            if (array0[j]>array0[j+1])
            {
                temp=array0[j];
                array0[j]=array0[j+1];
                array0[j+1]=temp;
            }
        }
    }
    print_array(8, array0);
}   