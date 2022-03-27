### 1. demo.c
```c
#include <string.h>
 
union calcs {
    int a;
    double b;
}num;
 
int main( )
{
    num.a = 34;
    // num.b = 34.5;
    printf("%d", num.a);
    printf("size of num : %ld\n", sizeof(num));
}

```



