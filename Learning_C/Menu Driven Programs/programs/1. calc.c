/*Write a menu driven program to construct a calculator for following arithmetic operations:
 addition, subtraction, multiplication, division, average and percentage*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, operation, len;
    int div, divs;
    int first;
    float sum, num, sub, prod, percent;
    float n, p;
    while (1)
    {
        printf("\nWhich operation do you want to carry out?\nEnter 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n 5 for average\n 6 for percentage \n7 to exit\nEnter here: ");
        scanf("%d", &operation);
        switch (operation)
        {
        case 1:
            sum=0;
            printf("How many Numbers to add?\nEnter Here :");
            scanf("%d", &len);
            for (i=0; i<len; i++)
            {
                printf("Enter number %d: ", i+1);
                scanf("%f", &num);
                sum+=num;
            }
            printf("sum is %f", sum);
            break;
        case 2:
            printf("How many Numbers to subtract?\nEnter Here :");
            scanf("%d", &len);
            printf("Enter number 1: ");
            scanf("%d", &first);
            sub=first;
            for (i=1; i<len; i++)
            {
                printf("Enter number %d: ", i+1);
                scanf("%f", &num);
                sub-=num;
            }
            printf("Result after subtracting is %f.", sub);
            break;
        case 3:
            printf("How many Numbers to take product of?\nEnter Here :");
            scanf("%d", &len);
            prod=1;
            for (i=0; i<len; i++)
            {
                printf("Enter number %d: ", i+1);
                scanf("%f", &num);
                prod*=num;
            }
            printf("Product is %f.", prod);
            break;
        case 4:
            printf("Enter dividend: ");
            scanf("%d", &div);
            printf("Enter divisor: ");
            scanf("%d", &divs);
            printf("Quotient is %d and remainder is %d\n", (div/divs),(div%divs) );
            break;
        case 5:
            printf("How many Numbers to average?\nEnter Here :");
            scanf("%d", &len);
            sum=0;
            for (i=0; i<len; i++)
            {
                printf("Enter number %d: ", i+1);
                scanf("%f", &num);
                sum+=num;
            }
            printf("Average is %f", sum/len);
            break;
        case 6: 
            printf("Enter number and what percentage of it is to be calculated.\n");
            printf("Enter number: ");
            scanf("%f", &n);
            printf("Enter what percentage of it is to be calculated: ");
            scanf("%f", &p);
            percent=(n/100)*p;
            printf("%f percentage of %f is %f", p, n, percent);
            break;
        case 7:
            printf("Abort!\n");return 0;
        }
        printf("\n");
    }
}   