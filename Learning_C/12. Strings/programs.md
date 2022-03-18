### 1. 1. program.c
```c

int main()
{
    char name[]="Karthik";
    printf("name: %s\n", name);
}


```

### 2. // Write a program to check if a string is palindrome or not
```c

#include <stdio.h>
#include <string.h>

int main()
{
    int i=0, j=0, flag=1;
    char text[100];
    printf("Enter string: ");
    fgets(text, 100, stdin);
    int len=strlen(text);
    
    for (i=(len-2); i>=0; i--)
    {
        if(text[i]!=text[j])
        {
            flag=0; i=-1;
        }j++;
    }
    if(flag==1)
    {
        printf("Text is palindrome\n");
    }
    else
    {
        printf("Text is not palindrome\n");
    }
}

```

### 3. 3. gets and puts.c
```c
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
```

### 4. /*string functions*/
### 
### #include <stdio.h>
### #include <string.h>
### 
### int main()
### {
###     char string1[]="Hello world!";
###     char string2[]="Hello world!";
###     char string3[]="Something else!";
###     char string4[]="Hello";
### 
###     // strlen(string1)
### 
###     // strlen returns the length of the string
###     printf("Length of string is %ld\n\n", strlen(string1));
### 
### 
###     // strcmp(string1, string2)
### 
###     // strcmp compares two strings, returns 0 if they are equal
###     // a negative value if first string is lesser than the second string
###     // a positive value if first string is greater than the second string
### 
###     int cmp;
### 
###     cmp = strcmp(string1, string2);
###     printf("Result after strcmp on string1 and string2: %d\n", cmp);
### 
###     cmp = strcmp(string1, string3);
###     printf("Result after strcmp on string1 and string3: %d\n", cmp);
### 
###     cmp = strcmp(string1, string4);
###     printf("Result after strcmp on string1 and string4: %d\n\n", cmp);
### 
### 
###     // strncmp(string1, string2, num_of_chars)
### 
###     // strncmp compares two strings, but you need to pass a third argument telling the number of characters you want to compare
###     // returns 0 if they are equal
###     // a negative value if first string is lesser than the second string
###     // a positive value if first string is greater than the second string
### 
###     cmp = strncmp(string1, string2, 5);
###     printf("Result after strncmp on string1 and string2 on first 5 chars is: %d\n", cmp);
### 
###     cmp = strncmp(string1, string3, 5);
###     printf("Result after strncmp on string1 and string3 on first 5 chars is: %d\n", cmp);
### 
###     cmp = strncmp(string1, string4, 5);
###     printf("Result after strncmp on string1 and string4 on first 5 chars is: %d\n\n", cmp);
### 
###     printf("\n");
### 
###     
### 
### }

