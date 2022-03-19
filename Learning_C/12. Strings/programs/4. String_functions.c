/*string functions*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[]="Hello world!";
    char string2[]="Hello world!";
    char string3[]="Something else!";
    char string4[]="Hello";

    // strlen(string1)

    // strlen returns the length of the string
    printf("Length of string is %ld\n\n", strlen(string1));


    // strcmp(string1, string2)

    // strcmp compares two strings, returns 0 if they are equal
    // a negative value if first string is lesser than the second string
    // a positive value if first string is greater than the second string

    int cmp;

    cmp = strcmp(string1, string2);
    printf("Result after strcmp on string1 and string2: %d\n", cmp);

    cmp = strcmp(string1, string3);
    printf("Result after strcmp on string1 and string3: %d\n", cmp);

    cmp = strcmp(string1, string4);
    printf("Result after strcmp on string1 and string4: %d\n\n", cmp);


    // strncmp(string1, string2, num_of_chars)

    // strncmp compares two strings, but you need to pass a third argument denoting the number of characters you want to compare
    // returns 0 if they are equal
    // a negative value if first string is lesser than the second string
    // a positive value if first string is greater than the second string

    cmp = strncmp(string1, string2, 5);
    printf("Result after strncmp on string1 and string2 on first 5 chars is: %d\n", cmp);

    cmp = strncmp(string1, string3, 5);
    printf("Result after strncmp on string1 and string3 on first 5 chars is: %d\n", cmp);

    cmp = strncmp(string1, string4, 5);
    printf("Result after strncmp on string1 and string4 on first 5 chars is: %d\n\n", cmp);

    // strcat(string1, string2)

    // strcat concatenates two strings 

    strcat(string1, string3);
    printf("string1 after concatenating string3 is '%s'\n\n", string1);



    

}