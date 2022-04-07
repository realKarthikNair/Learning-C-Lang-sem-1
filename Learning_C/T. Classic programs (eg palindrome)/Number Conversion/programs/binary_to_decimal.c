// #include <stdio.h>
// int main()  
// {  
//     int num, num_in_binary, num_in_decimal = 0, base = 1, rem;  
//     printf ("Enter a binary number with the combination of 0s and 1s \n");  
//     scanf ("%d", &num);
  
//     num_in_binary = num;
      
      
//     while ( num > 0)  
//     {  
//         rem = num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */  
//         num_in_decimal = num_in_decimal + rem * base;  
//         num = num / 10; // divide the number with quotient  
//         base = base * 2;  
//     }  
  
//     printf ( " The binary number is %d \t", num_in_binary); // print the binary number  
//     printf (" \n The decimal number is %d \t", num_in_decimal); // print the decimal
// }  