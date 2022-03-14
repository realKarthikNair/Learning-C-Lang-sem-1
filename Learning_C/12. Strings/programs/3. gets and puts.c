#include <stdio.h>  
#include <string.h>

int main ()  
{  
    char s[100];  
    printf("Enter something: ");  
    gets(s);
    printf("You entered \""); 
    puts(s); 
    printf("\"");
}  