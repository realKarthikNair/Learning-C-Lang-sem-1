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

### 2. /* Write a program to create two files with names EvenFile and OddFile.
### Input 20 numbers from the user and save even numbers in EvenFile and odd numbers in OddFile.*/
```c

#include <stdio.h>

int main() 
{
    // Input 20 numbers from the user

    int numbers[20], num, num1;

    for(int i=0; i<(sizeof(numbers)/sizeof(int)); i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    // Save even numbers in EvenFile and odd numbers in OddFile

    FILE * odd = fopen("OddFile.txt", "w");
    FILE * even = fopen("EvenFile.txt", "w");

    for (int i=0; i<(sizeof(numbers)/sizeof(int)); i++)
    {
        if ((numbers[i]%2)==0)
        {
            putw(numbers[i], even);
        }
        else
        {
            putw(numbers[i], odd);
        }
    }

    printf("Numbers saved successfully\n");

    fclose(odd);
    fclose(even);
}


```

