### 1. 1. arrays_question1.c
```c
int main()
{
    int i, marks[10];
    for (i=0;i<10;i++)
    {
        printf("Input marks of roll num %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    for (i=0;i<10;i++)
    {
        printf("Score of student %d is %d\n", i+1, marks[i]);
    }
}



```

### 2. // Sort an array ascending and descending
```c

#include <stdio.h>

int main()
{
    int array[]={3,4,43,23,32,33,21,39,98};
    int i, j, temp;
    // Sorting the array ascending
    for (i=0; i<9; i++)
    {
        for (j=i+1;j<9;j++)
        {
            if (array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    // Displaying the array in ascending order
    printf("The array in ascending order is\n");
    for (i=0; i<9; i++)
    {
        printf("%d, ", array[i]);
    }
    // Sorting the array descending
    for (i=0; i<9; i++)
    {
        for (j=i+1;j<9;j++)
        {
            if (array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    // Displaying the array in descending order
    printf("The array in ascending order is\n");
    for (i=0; i<9; i++)
    {
        printf("%d, ", array[i]);
    }
}
```

### 3. // Write a program to input marks of 50 students using an array and display the average marks of the class.
```c

#include <stdio.h>

int main()
{
    float sum=0, average=0;
    int students[50], i, j;
    for (i = 0; i < 50; i++)
    {
        printf("Input marks of student %d: ", i+1);
        scanf("%d", &students[i]);
    }
    for (i = 0; i < 50; i++)
    {
        sum += students[i];
    }
    printf("Average marks of class is %f\n", sum/50);
}
```

### 4. // Write a program to search for a number entered by the user in a given array and display the array in ascending order
```c

#include <stdio.h>

int main()
{
    int array[]={3,4,43,23,32,33,21,39,98};
    int i,j,n,flag=0, temp;
    printf("Enter the number to be searched: ");
    scanf("%d", &n);
    for (i=0; i<9; i++)
    {
        if (n==array[i])
        {
            printf("%d found in array at index %d\n", n,i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("%d not found in array!\n",n);
    }
    // Sorting the array
    for (i=0; i<9; i++)
    {
        for (j=i+1;j<9;j++)
        {
            if (array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    // Displaying the array in ascending order
    printf("The array in ascending order is\n");
    for (i=0; i<9; i++)
    {
        printf("%d, ", array[i]);
    }
}
```

