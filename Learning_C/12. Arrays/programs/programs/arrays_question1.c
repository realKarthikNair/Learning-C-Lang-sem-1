#include <stdio.h>
int marks[10];
int main()
{
    int i;
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


