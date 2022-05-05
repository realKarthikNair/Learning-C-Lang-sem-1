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

void traverse(int n, int arr[])
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

    traverse(n, array);

    // insert element at k

    for (i=n-1; i>=k; i--)
    {
        array[i+1] = array[i];
    }

    array[k]=element_to_add;
    n+=1;

    printf("\nArray after inserting an element is \n");

    traverse(n, array);

    // Delete element at k

    for (i=k; i<(n-1); i++)
    {
        array[i]=array[i+1];
    }

    n-=1;

    printf("\nArray after deletion of an element is \n");
    traverse(n, array);


    // reverse the array 

    for(i=0; i<(n/2); i++)
    {
        temp= array[i];
        array[i]=array[(n-1)-i];
        array[(n-1)-i]=temp;
    }

    printf("\nArray after reversing is \n");
    traverse(n, array);

}


```

### 2.  Linear Search
```c


#include <stdio.h>

int main()
{
    int i, item_to_search, n=8;

    int array[10]={22,32,21,33,42,11,22,45};

    // Linear search

    printf("\nEnter element to be searched: ");
    scanf("%d", &item_to_search);

    for (i=0; i<n; i++)
    {
        if (array[i]==item_to_search)
        {
            printf("\nElement %d found at index %d\n", item_to_search, i);break;
        }
    }

    if (i==n)
    {
        printf("\nElement %d not found!\n", item_to_search);
    }
}


```

### 3.  Binary Search
```c

#include <stdio.h>

int main()
{
    int i, item_to_search, n=8;
    int array[10]={34, 42, 51, 68, 69, 73, 88, 92};
    int start=0, end=n, mid;

    printf("\nEnter element to be searched: ");
    scanf("%d", &item_to_search);

    // Binary Search 

    while (start<=end)
    {
        mid=(start+end)/2;
        if (array[mid]==item_to_search)
        {
            printf("\nElement %d found at index %d!\n", item_to_search, mid);
            break;
        }
        else if (array[mid]<item_to_search)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }

    if (start>end)
    {
        printf("\nElement %d not found!\n", item_to_search);
    }

}

```

### 4. D.bubble_sort.c
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

### 5.  Selection Sort
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

