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
