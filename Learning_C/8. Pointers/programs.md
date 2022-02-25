### 1. // Program to demonstrate pointers in C
```c

#include <stdio.h>
int main()
{
    int num = 1;  //declared an integer variable named num with value 10
    int *p;  //declared variable p of type pointer
    p = &num; //p is pointing to the address of the variable num of type integer.
    printf("value of p is %p\n", p);
    printf("Value of &p is is %p\n", &p);
    printf("value of *p is %d\n", *p);
    printf("value of num is %d\n", num);
    printf("Value of &num is %p\n", &num);
}

```

### 2. // Swap two variables using pointers
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

