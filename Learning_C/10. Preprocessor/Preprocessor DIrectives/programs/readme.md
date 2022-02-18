### 1. // Program to demonstrate the working of file inclusion 
```c
// hello.c already exists in same directory
#include "hello.c"

void main()
{
   print_hello();
}
```

### 2. // Demonstrating the working of argumented macros
```c

#include <stdio.h>
#define SUM(a,b,c) a+b+c

int main()
{
    int i,j,k,num;
    printf("Enter first number: ");
    scanf("%d",&i);
    printf("Enter second number: ");
    scanf("%d",&j);
    printf("Enter third number: ");
    scanf("%d",&k);
    printf("Sum is %d\n",SUM(i,j,k));
}
```

### 3.
```c

void print_hello()
{
    printf("Hello World!");
}

```

### 4. // Demonstrating the working of nested macros
```c

#include <stdio.h>
#define PI 3.14
#define CIRCLE_AREA(x) PI*x*x

int main()
{
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    printf("Area is %f", CIRCLE_AREA(r));
}
```

### 5. // Write a program to calculate the area of a circle. Make a symbolic constant for PI.
```c

#include <stdio.h>

// Define a symbolic constant PI
// It is a convention to name symbolic constants in uppercase
#define PI 3.14 

int main()
{
    int r;
    printf("Enter radius: ");
    scanf("%d",&r);
    printf("Area = %f", PI*r*r);
}
```

