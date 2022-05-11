/* WAP to do the following operations on 1D array:

1. Initialization
2. Traversal
3. insertion at kth position
4. Reverse the array

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

