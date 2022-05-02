// Linear Search


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
    int i, array[10], item_to_search, n=5;

    for (i=0; i<n; i++)
    {
        printf("\nInput element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\nInput array is \n");

    traverse(n, array);

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
        printf("\nElement not found!\n");
    }

}
