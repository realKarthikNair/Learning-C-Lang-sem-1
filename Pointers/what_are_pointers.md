# Pointers in C

- Pointer is a variable which is capable of storing the memory address of another variable.
- A memory address is an exact assigned location in RAM used to track where an information is stored. 

For example,


    #include <stdio.h>
    int main()
    {
        int num = 1;  //declared an integer variable named num with value 10
        int *p;  //declared variable p of type pointer
        p = &num; //p is pointing to the address of the variable num of type integer.
        printf("value of p is %p\n", p);
        printf("value of *p is %d\n", *p);
        printf("value of num is %d\n", num);
        printf("Memory address of num is %p\n", &num);
        printf("Memory address of p is %p\n", &p);
    }


Will have an output, say

    value of p is 0x7fffffffd85c
    value of *p is 1
    value of num is 1
    Memory address of num is 0x7fffffffd85c
    Memory address of p is 0x7fffffffd86


Though the memory addresses might be variable accross runtimes and different computers, the major things to note are 

- The value of pointer p and the memory address of num would be the same
- The value of variable *p and num would be the same
- The memory address of pointer p would be different from the address of the variable num


