/*50. Display the following pattern on screen( inverted full pyramid): ( Up to n)

* * * * * * * * *
  * * * * * * *
    * * * * *
     * * *
       *

*/

// logic
// The number of stars is ((2*i)-1) for each row (eg in the 5th row, it is (2*5)-1=9 as in the question )
// The number total of spaces in a row is the same as i


#include <stdio.h>  
int main()  
{   
  int i,j,n,k,m=1;  
  printf("Enter value of n: ");
  scanf("%d", &n);
  for (i=n;i >= 1;i--)  
  {       
    for (j=1;j<=m;j++)  
    {  
      printf("  ");
    }  
    for (k=1;k<=(2*i-1);k++)
    {  
      printf("* ");
    }  
    m++;  
    printf("\n");  
  }  
}
