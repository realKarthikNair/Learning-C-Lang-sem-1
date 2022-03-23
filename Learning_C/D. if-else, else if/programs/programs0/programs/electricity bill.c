/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given conditions:                
 For first 50 units Rs. 0.50/unit 
 For next 100 units Rs. 0.75/unit 
 For next 100 units Rs. 1.20/unit 
 For unit above 250 Rs. 1.50/unit 
 An additional surcharge of 20% is added to the bill*/

 #include <stdio.h>

 int main()
 {
     float units, cost;
     printf("Enter the number of units: ");
     scanf("%f", &units);
     if (units<=50)
     {
         cost=0.5;
     }
     else if (units<=150)
     {
         cost=0.75;
     }
     else if (units<=250)
     {
         cost=1.2;
     }
     else
     {
         cost=1.5;
     }
     printf("Elecricity charge is Rs %f", (0.2*(units*cost))+(units*cost));
     printf("\n");
 }
 