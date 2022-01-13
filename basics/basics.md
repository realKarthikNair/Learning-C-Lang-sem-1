### 1. Write a C program to find maximum between two numbers

    // Write a C program to find maximum between two numbers.

    #include <stdio.h>

    int main()
    {
      int a,b;
      printf("Enter the first number: ");
      scanf("%d", &a);
      printf("Enter the second number: ");
      scanf("%d", &b);
      if (a>b)
      {
        printf("\n%d is the maximum number", a);
      }
      else if (a<b)
      {
        printf("\n%d is the maximum number", b);
      }
      // Exception 
      else
      {
        printf("Entered numbers are equal");
      }
      printf("\n");
    }

### 2. Write a C program to find maximum between three numbers

        // Write a C program to find maximum between three numbers

        #include <stdio.h>

        int main()
        {
            int a,b,c;
            printf("Enter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
            printf("Enter the third number: ");
            scanf("%d", &c);
            if ((a>b)&&(a>c))
            {
                printf("%d is the largest number !",a);
            }
            if ((b>a)&&(b>c))
            {
                printf("%d is the largest number !",b);
            }
            if ((c>a)&&(c>b))
            {
                printf("%d is the largest number !",c);
            }
            // Exception
            else
            {
                printf("Entered numbers are equal");
            }
            printf("\n");
        }

