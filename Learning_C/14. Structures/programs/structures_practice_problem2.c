/*Write a program to create a structure for employees containing the following data members:
Employee ID, Employee Name, Age, Address, Department and Salary. 
Input data for 10 employees and display the details of the employee from the employee ID given by the user.*/

#include <stdio.h>
#include <string.h>

void discard_remainder_of_line( void )
{
    int c;
    // discarding the leftovers of a scanf 
    do
    {
        c = getchar();

    } while ( c != EOF && c != '\n' );
}

int main()
{
   int i=0;
   typedef struct employee
   {
      long int id;
      char name[30];
      int age;
      char address[100];
      char dept[30];
      long int salary;
   }emp;

   emp list[5];

   for (i = 0; i<10;i++)
   {
      printf("Enter id of employee %d : ", i+1);
      scanf("%ld", &(list[i].id));
      discard_remainder_of_line();
      printf("Enter name of employee %d : ", i+1);
      fgets(list[i].name, sizeof(list[i].name), stdin);
      printf("Enter age of employee %d : ", i+1);
      scanf("%d", &(list[i].age));
      discard_remainder_of_line();
      printf("Enter address of employee %d : ", i+1);
      fgets(list[i].address, sizeof(list[i].address), stdin);
      printf("Enter dept of employee %d : ", i+1);
      fgets(list[i].dept, sizeof(list[i].dept), stdin);
      printf("Enter salary of employee %d : ", i+1);
      scanf("%ld", &list[i].salary);
      discard_remainder_of_line();
   }

   long int emp_id;
   printf("\nEnter employee id to be searched: ");
   scanf("%ld", &emp_id);
   discard_remainder_of_line();

   // Linear search
   for (i=0; i<10; i++)
   {
      if (list[i].id==emp_id)
      {
         printf("\nEmployee found!!\n");
         printf("Id : %ld \n", list[i].id);
         printf("Name : %s \n", list[i].name);
         printf("Age : %d\n", list[i].age);
         printf("Address : %s \n", list[i].address);
         printf("Dept : %s \n", list[i].dept);
         printf("Salary : %ld \n", list[i].salary);
         return 0;
      }
   }
   printf("\nEmployee not found!!");
}

