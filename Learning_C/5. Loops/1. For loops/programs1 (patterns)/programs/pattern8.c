/*

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

*/

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter value of n (number of columns): ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
      for (i = n-1; i >= 1; i--)  
    {  
        for (j=1; j<= i; j++)  
        {  
            printf("* ");  
        }  
        printf("\n");  
    }
}