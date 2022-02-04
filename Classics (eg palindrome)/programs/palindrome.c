// Find if input is a palindrome number

#include <stdio.h>

int reverse(int number);

int reverse(int number)
{
    int num1=0;
    while (number>0)
    {
        num1=(num1*10)+(number%10);
        number/=10;
    }
    return num1;
}

void main()
{
    int num, og_num;
    printf("Enter a number: ");
    scanf("%d",&num);
    og_num=num;
    num=reverse(num);
    if (og_num==num)
    {
        printf("Palindrome!\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }
}