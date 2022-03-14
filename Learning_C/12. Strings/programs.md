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

### 4. 4. String_functions.c
```c
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[]="Hello world!";
    printf("Length of string is %ld\n", strlen(string1));
}
```

