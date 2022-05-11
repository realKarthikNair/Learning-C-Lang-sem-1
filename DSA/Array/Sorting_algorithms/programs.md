### 1. A.bubble_sort.c
```c

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
    for (i=0; i<n; i++)
    {
        for (j=0; j<(n-1); j++)
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
```

### 2.  Selection Sort
```c

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
    int array0[10]={34,22,33,11,76,91,3,43};
    n=8;
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
```

### 3.  Insertion Sort
```c

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
```

### 4.  Merge Sort
```c



