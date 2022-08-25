// Merge Sort

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
