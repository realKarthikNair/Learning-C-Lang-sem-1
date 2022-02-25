// Swap two variables using pointers

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