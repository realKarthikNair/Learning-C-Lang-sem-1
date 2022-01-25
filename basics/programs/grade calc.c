/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following: 
 Percentage >= 90% : Grade A 
 Percentage >= 80% : Grade B 
 Percentage >= 70% : Grade C 
 Percentage >= 60% : Grade D 
 Percentage >= 50% : Grade E 
 Percentage < 40% : Grade F */

#include <stdio.h>

int main()
{
    float mark1, mark2, mark3, mark4, mark5, percentage;
    printf("Marks are out of 100 \n");
    printf("Input marks in Physics: ");
    scanf("%f", &mark1);
    printf("Input marks in Chemistry: ");
    scanf("%f", &mark2);
    printf("Input marks in Mathematics: ");
    scanf("%f", &mark3);
    printf("Input marks in Biology: ");
    scanf("%f", &mark4);
    printf("Input marks in Computer: ");
    scanf("%f", &mark5);
    percentage=((mark1+mark2+mark3+mark4+mark5)/500)*100; 
    printf("Percentage is %f \n", percentage);
    printf("Grade is ");
    if (percentage>=90)
    {
        printf("A");
    }
    else if (percentage>=80)
    {
        printf("B");
    }
    else if (percentage>=70)
    {
        printf("C");
    }
    else if (percentage>=60)
    {
        printf("D");
    }
    else if (percentage>=50)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }
    printf("\n");
}
