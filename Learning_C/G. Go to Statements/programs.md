### 1.  GO TO STATEMENT
```c

/* Program to print numbers from 1 to 10
   using go to statement 
*/

#include <stdio.h>

int main(){
    int number;

    printnumber:
    printf("%d", number);

    number++;
    if (number<=10){
    goto printnumber;
    }
}

```

