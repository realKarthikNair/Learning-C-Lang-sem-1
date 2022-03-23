### 1.  Program to print numbers from 1 to 10 using go to statement.

```c

#include <stdio.h>

int main(){
    int number=1;

    printnumber:
    printf("%d ", number);

    number++;
    if (number<=10){
    goto printnumber;
    }
}

```
### Output

```
1 2 3 4 5 6 7 8 9 10
```
