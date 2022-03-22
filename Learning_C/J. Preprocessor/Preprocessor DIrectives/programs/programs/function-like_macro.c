// Demonstrating the working of argumented macros

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