### 1. // Display counting from 1 to 100 using for loop
```c

#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 100; i++)
        printf("%d,", i);   
    printf("\n");
}

```

### 2. // Display counting from 1 to n using for loop
```c

#include <stdio.h>

int main()
{
    int i=1,n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for (i;i<=n;i++)
    {
        printf("%d,",i);
    }
    printf("\n");
}

```

### 3. // Display counting from 100 to 1 using for loop
```c

#include <stdio.h>

int main()
{
    printf("Name: Karthik Nair, Class: BCA1EA\n");
    int i;
    for (i = 100; i >= 1; i--)
        printf("%d,", i);   
    printf("\n");
}
```

### 4. // Display average marks of n number of students, take inputs from user using for loop
```c

#include <stdio.h>

int main()
{
    int n, marks, i=1;
    float sum=0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i; n>=i; i++)
    {
        printf("Enter marks of student %d: ", i);
        scanf("%d", &marks);
        sum += marks;
    }
    printf("Average marks of %d students is %f\n", n, sum/n);
}
```

### 5. // Display first 50 even nos. Using for loop 
```c

#include <stdio.h>

int main()
{
    int i=2;
    for (i; i<=100; i+=2)
    {
        printf("%d,", i);
    }
    printf("\n");
}

```

### 6. // Display first 50 multiples of 7 using for loop
```c

#include <stdio.h>

int main()
{
    int a=7;
    for (a; a<=(7*50); a+=7)
    {
        printf("%d ", a);
    }
}
```

### 7. // Display first 50 odd nos. Using for loop 
```c

#include <stdio.h>

int main()
{
    int i=1;
    for (i; i<=99; i+=2)
    {
        printf("%d,", i);
    }
    printf("\n");
}
```

### 8. // Display counting from n to 1 using for loop
```c

#include <stdio.h>

int main()
{
    int i=1,n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for (n;n>=i;n--)
    {
        printf("%d,",n);
    }
    printf("\n");
}
```

### 9. // Display sum of first 50 even nos. Using for loop 
```c

#include <stdio.h>

int main()
{
    int i=2,sum=0;
    for (i;i<=100;i+=2)
    {
        sum+=i;
    }
    printf("%d\n",sum);
}
```

### 10. // Display sum of first 50 odd nos. Using for loop
```c

#include <stdio.h>

int main()
{
    int i=1,sum=0;
    for (i;i<=99;i+=2)
    {
        sum+=i;
    }
    printf("%d\n",sum);
}


```

### 11. // Display sum of first n natural nos. using for loop
```c

#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (n; n>=1; n--)
    {
        sum+=n;
    }
    printf("%d\n", sum);
}
```

