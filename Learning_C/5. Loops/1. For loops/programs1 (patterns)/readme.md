### 1. /*Display the following pattern on screen: (Up to n rows)
### 
### *
### **
### ****/
	
	#include <stdio.h>
	
	int main()
	{
	    int i, n, j;
	    printf("Enter value of n: ");
	    scanf("%d", &n);
	    for (i=1; i<=n; i++)
	    {
	        for (j=1; j<=i; j++)
	        {
	            printf("*");
	        }
	        printf("\n");
	    }
	}

### 2. /*Display the following pattern on screen: ( Up to n rows)
### 
### 1
### 1 2
### 1 2 3
### 1 2 3 4 … */
	
	#include <stdio.h>
	
	int main()
	{
	    int i, n, j;
	    printf("Enter value of n: ");
	    scanf("%d", &n);
	    for (i=1; i<=n; i++)
	    {
	        for (j=1; j<=i; j++)
	        {
	            printf("%d", j);
	        }
	        printf("\n");
	    }
	}

### 3. /*Display the following pattern (Floyd’s Triangle) on screen: ( Up to n rows)
### 1
### 2 3
### 4 5 6
### 7 8 9 10… */
	
	
	#include <stdio.h>
	
	int main()
	{
	    int i=1, j=1, n=1, r;
	    printf("Enter value of n: ");
	    scanf("%d", &r);
	    for (i=1; i<=r; i++)
	    {
	        for (j=1; j<=i; j++)
	        {
	            printf("%d ", n);
	            n++;
	        }
	        printf("\n");
	    }
	}

### 4. /*Display the following pattern on screen: ( Up to n rows)
###  
### ***** 
### ****
### ***
### **
### *
### 
### */
	
	#include <stdio.h>
	
	int main()
	{
	    int i, n, j;
	    printf("Enter value of n: ");
	    scanf("%d", &n);
	    for (n; i<=n; n--)
	    {
	        for (j=1; j<=n; j++)
	        {
	            printf("*");
	        }
	        printf("\n");
	    }
	}

### 5. /*48. Display the following pattern on screen: ( Up to n rows)
###  
### 1 2 3 4 5
### 1 2 3 4 
### 1 2 3 
### 1 2 
### 1
### 
### */
	
	#include <stdio.h>
	
	int main()
	{
	    int i, n, j;
	    printf("Enter value of n: ");
	    scanf("%d", &n);
	    for (i=1; i<=n; n--)
	    {
	        for (j=1; j<=n; j++)
	        {
	            printf("%d", j);
	        }
	        printf("\n");
	    }
	}

### 6. /*Display the following pattern on screen: ( Up to n rows)
### 
### A
### B B
### C C C
### D D D D*/
	
	#include <stdio.h>
	
	int main()
	{
	    int i=1,j=1,n;
	    char a='A';
	    printf("Enter value of n: ");
	    scanf("%d",&n);
	    for (i=1;i<=n;i++)
	    {
	        for (j=1; j<=i; j++)
	        {
	            printf("%c ", a);
	            
	        }
	        a++;
	        printf("\n");
	    }
	}


### 7. /*50. Display the following pattern on screen( inverted full pyramid): ( Up to n)
### 
### * * * * * * * * *
###   * * * * * * *
###     * * * * *
###      * * *
###        *
### 
### */
	
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


