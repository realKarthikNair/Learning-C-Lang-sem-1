#include <stdio.h>
  
int main()
{
  
    // Pointer to an array of five numbers

    int i = 0;

    int(*a)[5];

    printf("Memory addresses of a initially\n\n");

    for (i=0; i<5; i++)
    {
        // printf("%d \n", (*a +i));
        printf("%p\n", &a[i]);
    }
  
    int b[5] = { 1, 2, 3, 4, 5 };
  
    
  
    // Points to the whole array b
  
    a = &b;
    
    printf("Memory addresses of a later\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("%p j\n", (*a + i));
        // printf("%p i\n", &a[i]);
        // printf("%d\n", *(*a + i));
    }
    printf("\nLife Sucks!\n");


    printf("Memory addresses of b\n\n");
    for (i=0; i<5; i++)
    {
        // printf("%d \n", (*b +i));
        // printf("%d \n", *(*a + i));
        // printf("%d \n", *(a[i]));
        //printf("%p \n", (a[i]));
         printf("%p i\n", &b[i]);
    }
  
    return 0;
}

