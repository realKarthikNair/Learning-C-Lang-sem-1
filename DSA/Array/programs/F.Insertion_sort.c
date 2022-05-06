// Insertion Sort

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
    int array0[10]={34,22,33,11,76,91,3,43};
    n=8;

    for (i=1; i<n; i++)
    {
        temp=array0[i];
        j=i-1;

        while ((j>=0) && (array0[j]>temp))
        {
            array0[j+1]=array0[j];
            j--;
        }
        array0[j+1]=temp;
    }
    print_array(8, array0);
}