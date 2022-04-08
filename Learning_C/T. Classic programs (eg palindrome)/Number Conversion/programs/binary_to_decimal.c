#include <stdio.h>

int main()  
{  
    int num_in_binary, num_in_binary_backup, remainder;  
    int num_in_decimal = 0, base = 1;
    printf ("Enter a binary number \n");  
    scanf ("%d", &num_in_binary);
  
    // code to check input is really a binary number or not can also be added, but i am not making it complicated for now

    num_in_binary_backup = num_in_binary;
      
      
    while ( num_in_binary > 0)  
    {  
        remainder = num_in_binary % 10;
        num_in_decimal = num_in_decimal + remainder * base;  
        base = base * 2;  
        num_in_binary = num_in_binary / 10;
    }  
  
    printf ( " Input binary '%d' ", num_in_binary_backup);
    printf ("in decimal number is '%d' \n", num_in_decimal);
}