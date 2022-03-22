### 1. // Display counting from 1 to 100 using while loop
```c

#include <stdio.h>

int main()
{
    int start=1, end=100;
    while (start<=end)
    { 
        printf("%d,", start);
        start++;
    }
    printf("\n");
}

```

### 2. // Display counting from 1 to n using while loop
```c

#include <stdio.h>

int main()
{
    int a=1, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while (a<=n)
    { 
        printf("%d,", a);
        a++;
    }
    printf("\n");
}

```

### 3. // Display counting from 100 to 1 using while loop
```c

#include <stdio.h>

int main()
{
    int start=100, end=1;
    while (start>=end)
    { 
        printf("%d,", start);
        start--;
    }
    printf("\n");
}

```

### 4. // Display average marks of n number of students, take inputs from  user Using while loop 
```c

#include <stdio.h>

int main()
{
    int n, marks, count=1; float sum=0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    while (n>=count)
    {
        printf("Enter marks of student %d: ", count);
        scanf("%d", &marks);
        count++;sum+=marks;
    }
    printf("Average marks of %d students is %f", n, (sum/n));
}

```

### 5. // Display first 50 even nos. Using while loop
```c

#include <stdio.h>

int main()
{
    int a=2, n=100;
    while (a<=n)
    { 
        printf("%d,", a);
        a+=2;
    }
    printf("\n");
}
```

### 6. // Display first 50 multiples of 7 Using while loop
```c

#include <stdio.h>

int main()
{
    int  count=1, a=7;
    while (count<=50)
    {
        printf("%d ",a);
        a+=7;count++;
    }
    printf("\n");
}
```

### 7. // Display first 50 odd nos. Using while loop 
```c

#include <stdio.h>

int main()
{
    int a=1, n=99;
    while (a<=n)
    { 
        printf("%d,", a);
        a+=2;
    }
    printf("\n");
}


```

### 8. // Display counting from n to 1 using while loop
```c

#include <stdio.h>

int main()
{
    int a=1, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while (a<=n)
    { 
        printf("%d,", n);
        n--;
    }
    printf("\n");
}

```

### 9. // Display sum of first 50 even nos. Using while loop 
```c

#include <stdio.h>

int main()
{
    int a=2, n=100, sum=0;
    while (a<=n)
    { 
        sum+=a;
        a+=2;
    }
    printf("%d\n", sum);
}

```

### 10. // Display sum of first 50 odd nos. Using while loop 
```c

#include <stdio.h>

int main()
{
    int a=1, n=99, sum=0;
    while (a<=n)
    { 
        sum+=a;
        a+=2;
    }
    printf("%d\n", sum);
}

```

### 11. // Display sum of first n natural nos.  Using while loop 
```c

#include <stdio.h>

int main()
{
    int a=1, n, sum=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    while (a<=n)
    { 
        sum+=a;
        a++;
    }
    printf("%d\n", sum);
}

```

