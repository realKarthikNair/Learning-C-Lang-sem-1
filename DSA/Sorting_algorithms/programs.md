### 1.  Bubble Sort
### # Time complexity: O(n^2)
### # Space complexity: O(1)
### */
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
    int array0[12]={34,22,33,11,76,91,3,43,2,30,1,33};
    n=12;

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
    print_array(n, array0);
}
```

### 4.  Merge Sort
```c

#include <stdio.h>

void merge(int arr[], int p, int q, int r)
{
    int b[9];
    int i, j, k;
    k = 0;
    i = p;
    j = q + 1;
    while (i <= q && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            b[k++] = arr[i++];
        }
        else
        {
            b[k++] = arr[j++];
        }
    }
    while (i <= q)
    {
        b[k++] = arr[i++];
    }
    while (j <= r)
    {
        b[k++] = arr[j++];
    }
    for (i = r; i >= p; i--)
    {
        arr[i] = b[--k];
    }
}
void mergesort(int arr[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = (p + r) / 2;
        mergesort(arr, p, q);
        mergesort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}
int main()
{
    int arr[9] = {7, 10, 30, 40, 50, 6, 4, 3, 2};
    int i;
    mergesort(arr, 0, 8);
    for (i = 0; i < 9; i++)
    {
        printf("%d ,", arr[i]);
    }
}

```

