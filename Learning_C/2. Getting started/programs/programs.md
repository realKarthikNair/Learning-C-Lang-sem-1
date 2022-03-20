

### 1. // Hello World program
```c

#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    return 0;
}   
```

### 2. // Add two numbers 'a' and 'b'. Numbers should be user inputs
```c

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf(" The sum of %d and %d is %d\n", a, b, a + b);
}
```

### 3. // Convert celsius to fahrenheit by taking input from the user
```c

#include <stdio.h>

int main()
{
    int celsius;
    printf("Enter temperature in degree celsius: ");
    scanf("%d", &celsius);
    printf("Temperature in fahrenheit is %f\n", (celsius*1.8)+(32));
}


```

