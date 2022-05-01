### 1. 5. reverse_an_array.c
```c

int main()
{
    int i, n=6, array0[]={1,22,33,65,22,54};
    for (i=0; i<(n/2); i++)
    {
        int temp=array0[i];
        array0[i]=array0[(n-1)-i];
        array0[(n-1)-i]=temp;
    }

    printf("Array after reversing is: \n");
    for (i=0; i<n; i++)
    {
        printf("%d, ", array0[i]);
    }
    printf("\n");
}
```

