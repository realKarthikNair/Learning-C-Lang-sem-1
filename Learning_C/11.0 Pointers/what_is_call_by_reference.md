# Call by Reference

- Passing the memory address of variable to functions
- basically passing pointers as function parameters


e.g., swapping values of two variables using call by reference

```c
#include<stdio.h> 

void swap (int* x,int* y);

int main()

{

    int a,b;

    printf("Enter Value of a: ");

    scanf("%d",&a); 

    printf ("Enter Value of b: ");

    scanf("%d", &b);

    printf("Before swapping\n Value of a is %d \n Value of b is %d \n", a, b);

    swap (&a, &b);

    printf("After swapping\n Value of a is %d \n Value of b is %d", a, b);

}

void swap (int* x ,int* y)

{

    int t=*x;

    *x=*y;

    *y=t;

}
```

Would output to e.g., 

```
Enter Value of a: 34
Enter Value of b: 52
Before swapping
 Value of a is 34 
 Value of b is 52 
After swapping
 Value of a is 52 
 Value of b is 34
```

