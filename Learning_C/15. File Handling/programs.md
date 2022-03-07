### 1. // WAP to write a line into a file
```c

#include <stdio.h>

int main() 
{
    FILE * ptr = fopen("file.txt", "w");
    char c;
    printf("input something ! \n");
    do
    {
        scanf("%c", &c);
        putc(c, ptr);
    } while (c!='\n');
    fclose(ptr);
}
    
```

### 2. file.txt


