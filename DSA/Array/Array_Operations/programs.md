### 1.  WAP to do the following operations on 1D array:
### 
### 1. Initialization
### 2. Traversal
### 3. insertion at kth position
### 4. Reverse the array
### 
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
    int i, array[10], n=5, k=1, element_to_add=15, temp;

    for (i=0; i<n; i++)
    {
        printf("Input element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\nInput array is \n");

    print_array(n, array);

    // insert element at k

    for (i=n-1; i>=k; i--)
    {
        array[i+1] = array[i];
    }

    array[k]=element_to_add;
    n+=1;

    printf("\nArray after inserting an element is \n");

    print_array(n, array);

    // Delete element at k

    for (i=k; i<(n-1); i++)
    {
        array[i]=array[i+1];
    }

    n-=1;

    printf("\nArray after deletion of an element is \n");
    print_array(n, array);


    // reverse the array 

    for(i=0; i<(n/2); i++)
    {
        temp= array[i];
        array[i]=array[(n-1)-i];
        array[(n-1)-i]=temp;
    }

    printf("\nArray after reversing is \n");
    print_array(n, array);

}


```

### 2. B. merging_of_two_sorted_arrays.c
```c

int main(void)
{
    int k=0, i=0, j=0, maxA=3, maxB=4, C[maxA+maxB+2];
    int A[4] = {34, 44, 51, 62};
    int B[5] = {11, 29, 57, 66, 71};

    for (k=0; i<=maxA && j<=maxB;)
    {
        if (A[i]<=B[j])
        {
            C[k++]=A[i++];
        }
        else
        {
            C[k++]=B[j++];
        }
    }

    while (i<=maxA)
    {
        C[k++]=A[i++];
    }

    while (j<=maxB)
    {
        C[k++]=B[j++];
    }

    for (k=0; k<9; k++)
    {
        printf("%d ,", C[k]);
    }
    printf("\n");
}
```

