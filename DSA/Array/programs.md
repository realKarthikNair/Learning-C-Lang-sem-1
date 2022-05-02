### 1. 2. element_insertion.c
```c

int main()
{
    int i, n = 6, k=2, array0[10] = {1, 22, 33, 65, 22, 54};

    // insert 25 at k=2;

    for (i=n-1; i>=k; i--)
    {
        array0[i+1]=array0[i];
    }

    array0[k]=25;
    n=n+1;

    printf("Array after deletion is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", array0[i]);
    }
    printf("\n");
}

```

### 2. 3. element_deletion.c
```c

int main()
{
    int i, n = 6, k=2, array0[10] = {1, 22, 33, 65, 22, 54};
    for(i=k; i<n-1; i++)
    {
        array0[i] = array0[i+1];
    }

    n=n-1;

    printf("Array after deletion is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", array0[i]);
    }
    printf("\n");
}



```

### 3. 5. reverse_an_array.c
```c

int main()
{
    int i, n = 6, array0[] = {1, 22, 33, 65, 22, 54};
    for (i = 0; i < (n / 2); i++)
    {
        int temp = array0[i];
        array0[i] = array0[(n - 1) - i];
        array0[(n - 1) - i] = temp;
    }

    printf("Array after reversing is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", array0[i]);
    }
    printf("\n");
}

```

