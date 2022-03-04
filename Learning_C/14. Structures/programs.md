### 1. /*WAP to create a structure of employee with id, name, dept and age.
### Also implement a linear search and display details of user with id as the search parameter
### */
```c

#include <stdio.h>

int main()
{
   int i=0;
   typedef struct employee
   {
      long int id;
      char name[10];
      char dept[30];
      int age ;
   }emp;
   
   emp list[5];
   
   for (i = 0; i<5;i++)
   {
      printf("Enter id of employee %d : ", i+1);
      scanf("%ld", &(list[i].id));
      printf("Enter name of employee %d : ", i+1);
      scanf("%s",list[i].name);
      printf("Enter dept of employee %d : ", i+1);
      scanf("%s", list[i].dept);
      printf("Enter age of employee %d : ", i+1);
      scanf("%d", &(list[i].age));
   }
   // printf("Data Enterd is as follows:\n");
   // for (int i = 0; i<5;i++)
   // {
   //    printf("Id : %ld \n", list[i].id);
   //    printf("Name : %s \n", list[i].name);
   //    printf("Dept : %s \n", list[i].dept);
   //    printf("Age : %d\n", list[i].age);
   // }

   long int emp_id;
   int flag=0;
   printf("Enter employee id to be searched: ");
   scanf("%ld", &emp_id);

   for (i=0; i<5; i++)
   {
      if (list[i].id==emp_id)
      {
         printf("Employee found!!");
         flag=1;
         printf("Id : %ld \n", list[i].id);
         printf("Name : %s \n", list[i].name);
         printf("Dept : %s \n", list[i].dept);
         printf("Age : %d\n", list[i].age);
      }
   }
   if (flag==0)
   {
      printf("Employee not found!!");
   }
}



```

