// Linear Search


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

