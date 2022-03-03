# Pointers in C

- Pointer is a variable which is capable of storing the memory address of another variable.
- A memory address is an exact assigned location in RAM used to track where an information is stored. 

### Declaration

 `<data type* > <pointer name>`

 e.g., 
 
 ```c
 int* ptr;
 ```

**Note**
 *`int *ptr` and `int * ptr` also works!*<br>
 *\* is known as Deferencing operator*

### Initialization

1. Intializing separately

`<pointer name>=&some_variable`

2. Declaring and Initializing together

`<data type* > <pointer name>=&some_variable`

e.g.,

```c
ptr=&a;  //intializing
```

```c
int* ptr=&a; //declaring and initializing
```

**Note**

*& is known as the address operarator*

For example,

```c
// Program to demonstrate pointers in C

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


Will have an output, say

    value of p is 0x7fffffffd81c
    Value of &p is is 0x7fffffffd820
    value of *p is 1
    value of num is 1
    Value of &num is 0x7fffffffd81c 


Though the memory addresses might be variable accross runtimes and different computers, the major things to note are 

- The value of pointer p and &num (memory address of num) would be the same
- The value of variable *p and num would be the same
- The memory address of pointer p would be different from the memory address of the variable num


