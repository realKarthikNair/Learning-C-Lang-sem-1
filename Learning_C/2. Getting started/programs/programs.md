### 1. Basic structure of a C program
```c
// This is a comment

/*This is a 
Multi-line comment.
comments are never executed, they mostly act as documentations to code*/

#include <stdio.h> 
/* #include 'includes' another file into your program. H
ere we are including the standard input/output library functions' header file that is necessary since important functions like printf is part of it */

/* main() is basically a function that is NECESSARY for a C program to work in ideal cases since it is from main() where the execution begins (excluding preprocessor lines) .
int is the return data type of the function... We'll get to those concepts at a later point in time
*/

int main()
{
  // printf, part of the standard input output library, prints its parameters on the screen. 
  printf("This line would be printed on screen upon executing! ");
}

// Curly braces are used to denote constructs such as blocks of code
// Semicolons are used for intendation in most of the compiled languages including C. 
// This simply means that spaces between tokens, e.g., doesn't even matter here unlike in languages like python. 

```

### 2. // Hello World program
```c

#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    return 0;
}   
```

### 3. // Add two numbers 'a' and 'b'. Numbers should be user inputs
```c

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf(" The sum of %d and %d is %d\n", a, b, a + b);
}
```

### 4. // Convert celsius to fahrenheit by taking input from the user
```c

#include <stdio.h>

int main()
{
    int celsius;
    printf("Enter temperature in degree celsius: ");
    scanf("%d", &celsius);
    printf("Temperature in fahrenheit is %f\n", (celsius*1.8)+(32));
}


```


