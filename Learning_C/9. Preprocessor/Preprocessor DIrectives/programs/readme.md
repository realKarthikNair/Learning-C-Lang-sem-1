### 1. // Demonstrating conditional compilation
```c

#include <stdio.h>
#define PI 5

int main()
{
    #if (PI==3)
        printf("Correct value!");
    #else
        #undef PI
        #define PI 3
        printf("Correct value assigned!");
    #endif
}

// // Demonstrating conditional compilation

// #include <stdio.h>
// #define PI 3.14

// int main()
// {
//     double pi=PI;
//     printf("%f\n",pi);
//     if (pi==3.14)
//     {
//         printf("Correct value!");
//     }
//     else
//     {
//         #undef PI
//         #define PI 3.14
//         printf("Correct value assigned!");
//     }
// }

```

### 2. // Program to demonstrate the working of file inclusion 
```c
// hello.c already exists in same directory
#include "hello.c"

void main()
{
   print_hello();
}
```

### 3. // Demonstrating the working of argumented macros
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

### 4. hello.c
```c

void print_hello()
{
    printf("Hello World!");
}

```

### 5. // Demonstrating the working of nested macros
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

### 6. // Write a program to calculate the area of a circle. Make a symbolic constant for PI.
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

