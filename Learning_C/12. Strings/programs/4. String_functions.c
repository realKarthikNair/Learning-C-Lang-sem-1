#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[]="Hello world!";
    char string2[]="Hello world!";
    char string3[]="Something else!";
    char string4[]="Hello";

    // strlen returns the length of the string
    printf("Length of string is %ld\n", strlen(string1));

    // strcmp compares two strings, returns 0 if they are equal
    // a negative value if first string is lesser than the second string
    // a positive value if first string is greater than the second string

    int cmp;

    cmp = strcmp(string1, string2);
    printf("%d\n", cmp);

    cmp = strcmp(string1, string3);
    printf("%d\n", cmp);

    cmp = strcmp(string1, string4);
    printf("%d\n", cmp);

    
}