// Selection Sort

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
    int i, j, n, temp, min, pos;
    int array0[12]={34,22,33,11,76,91,3,43,1,44,0,41};
    n=12;
    for (i=0; i<(n-1); i++)
    {
        min=array0[i];
        pos=i;
        for (j=i+1; j<=(n-1); j++)
        {
            if (array0[j]<min)
            {
                min=array0[j];
                pos=j;
            }
        }
        temp=array0[i];
        array0[i]=array0[pos];
        array0[pos]=temp;
    }
    print_array(n, array0);
}