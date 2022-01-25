/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following: 
 Basic Salary <= 10000 : HRA = 20%, DA = 80% 
 Basic Salary <= 20000 : HRA = 25%, DA = 90% 
 Basic Salary > 20000 : HRA = 30%, DA = 95% */

 #include <stdio.h>

 int main()
 {
     float HRA, DA, basic;
     printf("Enter Basic Salary: ");
     scanf("%f", &basic);
     if (basic<=10000)
     {
         DA=(0.8)*basic;
         HRA=(0.2)*basic;
     }
     else if (basic<=20000)
     {
         DA=(0.9)*basic;
         HRA=(0.25)*basic;
     }
     else
     {
         DA=(0.95)*basic;
         HRA=(0.3)*basic;
     }
     printf("Gross Salary is %f\n", basic+HRA+DA);
 }
