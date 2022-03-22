#include <stdio.h>
#include <string.h>

void discard_remainder_of_line( void )
{
    int c;
    
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

   for (i = 0; i<1;i++)   {
      printf("Enter id of employee %d : ", i+1);
      scanf("%ld", &(list[i].id));
      discard_remainder_of_line();
      printf("Enter name of employee %d : ", i+1);
      fgets(list[i].name, 30, stdin);
      printf("Enter age of employee %d : ", i+1);
      scanf("%d", &(list[i].age));
      discard_remainder_of_line();
      printf("Enter address of employee %d : ", i+1);
      fgets(list[i].address, 100, stdin);
      printf("Enter dept of employee %d : ", i+1);
      fgets(list[i].dept, 30, stdin);
      printf("Enter salary of employee %d : ", i+1);
      scanf("%ld", &list[i].salary);
      discard_remainder_of_line();
   }
   
   printf("%s\n", list[0].name);
   printf("%d\n", list[0].age);
   char length[100];
   sprintf(length, "%d", list[0].age);
   printf("length of age is %ld", strlen(length));
   printf("length of name is %ld", strlen(list[0].name));

/*   long int emp_id;*/
/*   int flag=0;*/
/*   printf("Enter employee id to be searched: ");*/
/*   scanf("%ld", &emp_id);*/
/*   discard_remainder_of_line();*/

/*   // Linear search*/
/*   for (i=0; i<2; i++)*/
/*   {*/
/*      if (list[i].id==emp_id)*/
/*      {*/
/*         printf("Employee found!!");*/
/*         flag=1;*/
/*         printf("Id : %ld \n", list[i].id);*/
/*         printf("Name : %s \n", list[i].name);*/
/*         printf("Age : %d\n", list[i].age);*/
/*         printf("Address : %s \n", list[i].address);*/
/*         printf("Dept : %s \n", list[i].dept);*/
/*         printf("Salary : %ld \n", list[i].salary);*/
/*      }*/
/*   }*/
/*   if (flag==0)*/
/*   {*/
/*      printf("Employee not found!!");*/
/*   }*/
}

