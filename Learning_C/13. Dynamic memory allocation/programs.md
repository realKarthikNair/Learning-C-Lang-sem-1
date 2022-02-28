### 1. // WAP to dynamically create an array of size given by user and display it in ascendiong order
```c

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaration, memory allocation and checking for successful allocation
    int len, i, j, temp;
    printf("Enter length of array: ");
    scanf("%d", &len);
    int* array= calloc(len, sizeof(int));
    if (array == NULL)
    {
        printf("Out of memory\n"); return 0;
    }

    // initializion of array
    for (i=0; i<len; i++)
    {
        printf("input value %d: ", i+1);
        scanf("%d", &array[i]);
    }   

    printf("Entered array is\n");
    for (i=0; i<len; i++)
    {
        printf("%d, ", *(array+i));
    }

    printf("\n");

    // sorting of array

    for (i=0; i<len; i++)
    {
        for (j=i+1; j<len; j++)
        {
            if (*(array+i) > *(array+j))
            {
                temp = *(array+i);
                *(array+i)=*(array+j);
                *(array+j)=temp;
            }
        }
    }

    // printing sorted array

    printf("Array after sorting is\n");
    for (i=0; i<len; i++)
    {
        printf("%d, ", *(array+i));
    }
    
    free(array);
}
```

