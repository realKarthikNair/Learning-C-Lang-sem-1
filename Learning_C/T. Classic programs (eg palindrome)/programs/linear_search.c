// Demonstrating Linear search

#include <stdio.h>

// Arr is the array of numbers, n is the number of elements in the array, e is the element to be searched

int linear_search(int arr[], int e, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == e)
        return i;
    }
    return 0;
}


int main()
{
    int arr[] = {22, 23, 34, 65, 42, 34};
    int e = 34;
    int n = sizeof(arr)/sizeof(arr[0]);
   
    // Function call
    int result = linear_search(arr, e, n);
    (result == 0)? (printf("Element is not present in array")): (printf("Element is present at index %d", result));
}