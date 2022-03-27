#include <stdio.h>
  
int main()
{
  
    // Pointer to an array of five numbers

    int i = 0;

    int(*a)[5];

    for (i=0; i<5; i++)
    {
        // printf("%d \n", (*a +i));
        printf("%p i\n", &a[i]);
    }
  
    int b[5] = { 1, 2, 3, 4, 5 };
  
    
  
    // Points to the whole array b
  
    a = &b;
  
    for (i = 0; i < 5; i++)
  
        // printf("%p j\n", (*a + i));
        printf("%p i\n", &a[i]);
        // printf("%d\n", *(*a + i));
    printf("'a' Over \n");
    for (i=0; i<5; i++)
    {
        printf("%d \n", (*b +i));
        printf("%p i\n", &b[i]);
    }
  
    return 0;
}