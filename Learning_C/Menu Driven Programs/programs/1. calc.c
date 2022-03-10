/*Write a menu driven program to construct a calculator for following arithmetic operations:
 addition, subtraction, multiplication, division, average and percentage*/

#include <stdio.h>
#include <stdlib.h>

float return_sum(float*,int len);
float return_sub(float*,int len);
float return_prod(float*,int len);

float percentage(float ,float);

float return_sum(float* nums,int len)
{
    float sum=0;
    for (int i=0; i<len; i++)
    {
        float num= (nums[i]);
        sum += num;
    }
    return sum;
}

float return_sub(float* nums,int len)
{
    float init=nums[0];
    float sub=init;
    for (int i=1; i<len; i++)
    {
        float num= (nums[i]);
        sub -= num;
    }
    return sub;
}

float return_prod(float* nums,int len)
{
    float prod=1;
    for (int i=0; i<len; i++)
    {
        float num= (nums[i]);
        prod*=num;
    }
    return prod;
}

float percentage(float p, float n)
{
    float percent=(n/100)*p;
    return percent;
}

int main()
{
    while (1)
    {
        int operation, len;
        printf("\nWhich operation do you want to carry out?\nEnter 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n 5 for average\n 6 for percentage \n7 to exit\nEnter here: ");
        scanf("%d", &operation);
        switch (operation)
        {
        case 1:
            float* nums, sum;
            printf("How many Numbers to add?\nEnter Here :");
            scanf("%d", &len);
            nums= calloc(len, sizeof(float));
            sum=0;
            for (int i=0; i<len; i++)
            {
                float value;
                printf("Enter Number %d: ", i+1);
                scanf("%f", &value);
                nums[i] = value;
            }
            sum= return_sum(nums,len);
            printf("sum is %f", sum);
            break;
        case 2:
            printf("How many Numbers to subtract?\nEnter Here :");
            scanf("%d", &len);
            nums= calloc(len, sizeof(float));
            for (int i=0; i<len; i++)
            {
                float value;
                printf("Enter Number %d: ", i+1);
                scanf("%f", &value);
                nums[i] = value;
            }
            float sub= return_sub(nums,len);
            printf("Result after subtracting is %f.", sub);
            break;
        case 3:
            printf("How many Numbers to take product of?\nEnter Here :");
            scanf("%d", &len);
            nums= calloc(len, sizeof(float));
            for (int i=0; i<len; i++)
            {
                float value;
                printf("Enter Number %d: ", i+1);
                scanf("%f", &value);
                nums[i] = value;
            }
            float prod= return_prod(nums,len);
            printf("Product is %f.", prod);
            break;
        case 4:
            int div, divs;
            printf("Enter dividend: ");
            scanf("%d", &div);
            printf("Enter divisor: ");
            scanf("%d", &divs);
            printf("Quotient is %d and remainder is %d\n", (div/divs),(div%divs) );
            break;
        case 5:
            printf("How many Numbers to average?\nEnter Here :");
            scanf("%d", &len);
            nums= calloc(len, sizeof(float));
            sum=0;
            for (int i=0; i<len; i++)
            {
                float value;
                printf("Enter Number %d: ", i+1);
                scanf("%f", &value);
                nums[i] = value;
            }
            sum= return_sum(nums,len);
            printf("Average is %f", sum/len);
            break;
        case 6:
            float n, p; 
            printf("Enter number and what percentage of it is to be calculated.\n");
            printf("Enter number: ");
            scanf("%f", &n);
            printf("Enter what percentage of it is to be calculated: ");
            scanf("%f", &p);
            printf("%f percentage of %f is %f", p, n, percentage(p, n));
            break;
        case 7:
            printf("Abort!\n");return 0;
        }
        printf("\n");
    }
}   